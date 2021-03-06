/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnreachable;
	BOOL _isProposed;
	BOOL _hasBeenPersisted;
	NSString* _contactIdentifier;
	NSString* _formattedName;
	NSData* _imageData;
	long long _contactType;
	long long _whitelistStatus;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * formattedName;                  //@synthesize formattedName=_formattedName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL isUnreachable;                        //@synthesize isUnreachable=_isUnreachable - In the implementation block
@property (nonatomic,readonly) BOOL isProposed;                           //@synthesize isProposed=_isProposed - In the implementation block
@property (nonatomic,readonly) long long contactType;                     //@synthesize contactType=_contactType - In the implementation block
@property (nonatomic,readonly) long long whitelistStatus;                 //@synthesize whitelistStatus=_whitelistStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenPersisted;                     //@synthesize hasBeenPersisted=_hasBeenPersisted - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(long long)contactType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasBeenPersisted;
-(id)description;
-(id)initWithContactIdentifier:(id)arg1 ;
-(NSData *)imageData;
-(NSString *)formattedName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUnreachable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(BOOL)arg4 isProposed:(BOOL)arg5 contactType:(long long)arg6 whitelistStatus:(long long)arg7 hasBeenPersisted:(BOOL)arg8 ;
-(long long)whitelistStatus;
-(BOOL)isProposed;
@end

