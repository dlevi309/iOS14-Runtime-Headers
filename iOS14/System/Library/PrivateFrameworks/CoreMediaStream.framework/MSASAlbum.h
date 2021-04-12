/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding> {

	BOOL _ownerIsWhitelisted;
	BOOL _isFamilySharedAlbum;
	int _relationshipState;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSDate* _subscriptionDate;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _foreignCtag;
	NSString* _URLString;
	NSString* _publicURLString;
	NSDictionary* _metadata;
	id _context;

}

@property (nonatomic,retain) NSString * ownerEmail;                   //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,retain) NSString * ownerFullName;                //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,retain) NSString * ownerPersonID;                //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * ownerFirstName;               //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,retain) NSString * ownerLastName;                //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (assign,nonatomic) BOOL ownerIsWhitelisted;                 //@synthesize ownerIsWhitelisted=_ownerIsWhitelisted - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) int relationshipState;                   //@synthesize relationshipState=_relationshipState - In the implementation block
@property (nonatomic,retain) NSString * foreignCtag;                  //@synthesize foreignCtag=_foreignCtag - In the implementation block
@property (nonatomic,retain) NSString * URLString;                    //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * publicURLString;              //@synthesize publicURLString=_publicURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isFamilySharedAlbum;                //@synthesize isFamilySharedAlbum=_isFamilySharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL useForeignCtag; 
+(BOOL)supportsSecureCoding;
+(id)album;
+(id)albumWithAlbum:(id)arg1 ;
-(NSString *)URLString;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)context;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)description;
-(void)setGUID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(NSString *)ownerEmail;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)subscriptionDate;
-(BOOL)ownerIsWhitelisted;
-(NSString *)ownerPersonID;
-(NSString *)ownerFullName;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(BOOL)isFamilySharedAlbum;
-(int)relationshipState;
-(NSString *)publicURLString;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)GUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(BOOL)useForeignCtag;
-(void)setOwnerEmail:(NSString *)arg1 ;
-(void)setOwnerFullName:(NSString *)arg1 ;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(void)setOwnerIsWhitelisted:(BOOL)arg1 ;
-(void)setSubscriptionDate:(NSDate *)arg1 ;
-(void)setRelationshipState:(int)arg1 ;
-(NSString *)foreignCtag;
-(void)setForeignCtag:(NSString *)arg1 ;
-(void)setPublicURLString:(NSString *)arg1 ;
-(void)setIsFamilySharedAlbum:(BOOL)arg1 ;
@end
