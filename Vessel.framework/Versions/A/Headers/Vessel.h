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

/**
 Report user a profile to the Vessel server. You can additional send any custom meta data. To recognize user distinctly you can set id.
 @param userAttributes : Create a userAtrributes object
*/
- (void) setUserAttributes:(VesselUserAttributes *) userAttributes;


/*
 Register push token from an NSData-encoded token.
 */
- (void) registerPushDeviceToken:(NSData *)deviceToken;

/**
 Call this from application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo method
 
 @param: UserInfo you have received from remote notification
*/
- (void) trackPushNotification:(NSDictionary *) userInfo;

/**
 Call this from application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo method
 
 If you want Vessel to handle push notification then use this method.
 
 @param: UserInfo you have received from remote notification
 */
- (void) handlePushNotification:(NSDictionary *) userInfo;


/**
  Helper method to check if push token is registered with Vessel.
 */
- (BOOL) isPushRegistered;

@end
