/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString, NSArray, NSNumber;

@interface AALoginResponseAppleAccountInfo : NSObject {

	BOOL _managedAppleID;
	BOOL _sandboxAccount;
	BOOL _optionalTerms;
	BOOL _familyEligible;
	NSString* _personID;
	NSString* _altDSID;
	NSString* _appleID;
	NSArray* _appleIDAliases;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmail;
	NSNumber* _primaryEmailVerified;
	NSNumber* _cloudDocsMigrated;
	NSNumber* _notesMigrated;
	NSNumber* _remindersMigrated;

}

@property (nonatomic,readonly) NSString * personID;                                      //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                                       //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSArray * appleIDAliases;                                 //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * primaryEmail;                                  //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,readonly) NSNumber * primaryEmailVerified;                          //@synthesize primaryEmailVerified=_primaryEmailVerified - In the implementation block
@property (nonatomic,readonly) NSNumber * cloudDocsMigrated;                             //@synthesize cloudDocsMigrated=_cloudDocsMigrated - In the implementation block
@property (nonatomic,readonly) NSNumber * notesMigrated;                                 //@synthesize notesMigrated=_notesMigrated - In the implementation block
@property (nonatomic,readonly) NSNumber * remindersMigrated;                             //@synthesize remindersMigrated=_remindersMigrated - In the implementation block
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID;              //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (getter=isSandboxAccount,nonatomic,readonly) BOOL sandboxAccount;              //@synthesize sandboxAccount=_sandboxAccount - In the implementation block
@property (getter=hasOptionalTerms,nonatomic,readonly) BOOL optionalTerms;               //@synthesize optionalTerms=_optionalTerms - In the implementation block
@property (getter=isFamilyEligible,nonatomic,readonly) BOOL familyEligible;              //@synthesize familyEligible=_familyEligible - In the implementation block
-(BOOL)isManagedAppleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)cloudDocsMigrated;
-(NSNumber *)notesMigrated;
-(NSNumber *)remindersMigrated;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)altDSID;
-(NSString *)personID;
-(NSString *)primaryEmail;
-(NSArray *)appleIDAliases;
-(NSString *)appleID;
-(BOOL)isSandboxAccount;
-(NSNumber *)primaryEmailVerified;
-(BOOL)hasOptionalTerms;
-(BOOL)isFamilyEligible;
@end

