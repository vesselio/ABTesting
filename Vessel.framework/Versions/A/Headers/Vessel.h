//
//  Vessel.h
//  Vessel Framework Version 1.3
//
//  Copyright (c) 2014 Vessel. All rights reserved.
//

#import <Vessel/VesselAB.h>
#import <Vessel/VesselUserAttributes.h>


/** The Vessel class is used to initialize the Vessel SDK for AB Testing. 
 */

@interface Vessel : NSObject

/** Returns the App Secret used to initialize Vessel SDK.
 */
@property (nonatomic, readonly) NSString *appSecret;


/** Returns a singleton that is an instance of Vessel SDK.
 @return Singleton instance of class Vessel.
*/
+ (Vessel*) sharedInstance;


/** Initializes Vessel SDK. This method should be called before calling any other Vessel SDK method.
 
 @param appSecret An app secret used to initialize the app.
 */
- (void) initializeWithAppSecret:(NSString*)appSecret launchOptions:(NSDictionary *)launchOptions;


/** Initializes Vessel SDK. This method should be called before calling any other Vessel SDK method.
 
 @param appSecret An app secret used to initialize the app.
*/
- (void) initializeWithAppSecret:(NSString*)appSecret __deprecated;


/** The timeout interval, in seconds. If during a connection attempt the request remains idle for longer
 than the timeout interval, the request is considered to have timed out. 
 The default timeout interval is 10 seconds.
*/
- (void) setTimeoutInterval:(NSInteger)seconds;


/** The method allows you to set custom filter key and values. It will show A/B test to users who will given
 set of filters.
 
 @param filters - Valid NSDictionary containly filter and its values.

*/
- (void) setFilters:(NSDictionary *) filters;

/** Starts a new session.
 
 @param sessionName The session that is to be started.
 */
- (void) startSession:(NSString*)sessionName;

/** Ends a started session.
 
 @param sessionName The session to be ended. Note that the session has to be started to end it.
 */
- (void) endSession:(NSString*)sessionName;

/** Ends all sessions that have been started but haven't been ended yet.
 */
- (void) endAllSessions;

/** Discards all sessions that have been started but haven't been ended yet.
 */
- (void) discardAllSessions;


/** Reports a checkpoint to the Vessel server
 
 @param checkpointName The checkpoint to be reported.
 @param metaData Extra meta data will be reported at this checkpoint
 
 */
- (void) reportCheckPoint:(NSString*)checkPointName withMetaData:(NSDictionary *) metaData;


/** Reports a checkpoint to the Vessel server for given active test with metaData.
 
 @param checkpointName The checkpoint to be reported.
 @param testName The name of the test for which checkpoint will be reported.
 @param metaData Extra meta data will be reported at this checkpoint
 */
- (void) reportCheckPoint:(NSString*)checkPointName forTest:(NSString*)testName withMetaData:(NSDictionary *) metaData ;


- (void) setUserAttributes:(VesselUserAttributes *) userAttributes;

/** In order to receive push notifications from Vessel. 
 You need to register the device token with Vessel.
 @param deviceToken Pass the push token
*/
- (void) registerPushDeviceToken:(NSData *)deviceToken;


/** Helper method to track push notification manually. Ideally call this method from
  application:didReceiveRemoteNotification:
 
 @param userInfo: Pass the userinfo.
*/
- (void) trackPushNotification:(NSDictionary *) userInfo;

/**
 Helper method to handle push notification, it will show & track push notification based on
 platform side configuration
 */
- (void) handlePushNotification:(NSDictionary *) userInfo;

/**
 Helper method to check if push notification is registered on this device.
*/

- (BOOL) isPushRegistered;

@end
