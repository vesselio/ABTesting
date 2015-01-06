//
//  VesselUserAttributes.h
//  Vessel Framework Version 1.3
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
 The person's address.
 */
-(void) setAddress:(NSString *) address;

/**
 The person's city.
 */
-(void) setCity:(NSString *) city;

/**
 The person's state.
 */
-(void) setState:(NSString *) state;

/**
 The person's country.
 */
-(void) setCountry:(NSString *) country;

/**
 The person's zipcode.
 */
-(void) setZipcode:(NSString *) zipcode;

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
 Set twitter id of user.
 */
-(void) setLinkedInId:(NSString *) LinkedInId;

/**
 Set users birthday in the format MM/DD/YYYY.
*/
-(void) setBirthDay:(NSString *) birthday;

/**
 Set users fb profile page.
 */
-(void) setProfileURL:(NSString *) url;

/**
 Set users profile pic.
 */
-(void) setProfilePicURL:(NSString *) url;

/**
 Set unit value.
 */
-(void) setUnitValue:(NSNumber *) value;

/**
 Set your own custom attributes.
*/

-(void) setCustomAttributes:(NSDictionary *) customAttributes;
@end
