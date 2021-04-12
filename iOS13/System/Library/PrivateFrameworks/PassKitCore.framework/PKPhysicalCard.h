/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSSet, PKImage;

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	unsigned long long _state;
	NSString* _FPANSuffix;
	NSURL* _frontFaceImageURL;
	NSString* _nameOnCard;
	NSDate* _lastUpdated;
	NSString* _trackingNumber;
	NSString* _shippingCompany;
	NSSet* _orderActivity;
	NSSet* _shippingActivity;
	PKImage* _frontFaceImage;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSURL * frontFaceImageURL;               //@synthesize frontFaceImageURL=_frontFaceImageURL - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                   //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSString * FPANSuffix;                   //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * trackingNumber;               //@synthesize trackingNumber=_trackingNumber - In the implementation block
@property (nonatomic,copy) NSString * shippingCompany;              //@synthesize shippingCompany=_shippingCompany - In the implementation block
@property (nonatomic,copy) NSSet * orderActivity;                   //@synthesize orderActivity=_orderActivity - In the implementation block
@property (nonatomic,copy) NSSet * shippingActivity;                //@synthesize shippingActivity=_shippingActivity - In the implementation block
@property (nonatomic,retain) PKImage * frontFaceImage;              //@synthesize frontFaceImage=_frontFaceImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
-(id)latestOrderActivity;
-(id)latestShippingActivity;
-(id)shipmentTrackingURL;
-(NSString *)FPANSuffix;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSURL *)frontFaceImageURL;
-(void)setFrontFaceImageURL:(NSURL *)arg1 ;
-(NSString *)trackingNumber;
-(void)setTrackingNumber:(NSString *)arg1 ;
-(NSString *)shippingCompany;
-(void)setShippingCompany:(NSString *)arg1 ;
-(NSSet *)orderActivity;
-(void)setOrderActivity:(NSSet *)arg1 ;
-(NSSet *)shippingActivity;
-(void)setShippingActivity:(NSSet *)arg1 ;
-(PKImage *)frontFaceImage;
-(void)setFrontFaceImage:(PKImage *)arg1 ;
@end
