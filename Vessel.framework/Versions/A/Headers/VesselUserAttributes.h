//
//  VesselUserAttributes.h
//  Vessel Framework Version 1.2
//
//  Copyright (c) 2014 Vessel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VesselUserAttributes : NSObject

/**
 The id to identify the user account. This ID is unique to each user. You can set email or your own uniqueId.
*/

-(void) setId:(NSString *) givenId;

/**
 This is persons primary email address will be listed on their profile.
*/

-(void) setEmail:(NSString *) email;

/**
 The persons first name
*/

-(void) setName:(NSString *) name;

/**
 The person's gender e.g. male, female
 */

-(void) setGender:(NSString *) gender;

/**
 The person's first name.
 */
-(void) setFirstName:(NSString *) firstName;

/** 
 The person's last name.
*/
-(void) setLastName:(NSString *) lastName;

/**
 Set install source e.g. _facebookAds or bannerAds.
*/
-(void) setInstallSource:(NSString *) installSource;

/**
 Set facebook id of user.
*/
-(void) setFacebookId:(NSString *) facebookId;

/**
 Set twitter id of user.
 */
-(void) setTwitterId:(NSString *) twitterId;

/**
 Set users birthday in the format MM/DD/YYYY.
*/
-(void) setBirthDay:(NSString *) birthday;

/**
 Set your own custom attributes.
*/

-(void) setCustomAttributes:(NSDictionary *) customAttributes;
@end
