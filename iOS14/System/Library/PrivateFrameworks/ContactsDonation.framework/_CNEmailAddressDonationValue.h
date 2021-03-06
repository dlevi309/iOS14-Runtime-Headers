/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/CNDonationValue.h>

@class NSString;

@interface _CNEmailAddressDonationValue : CNDonationValue {

	NSString* _emailAddress;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                     //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

