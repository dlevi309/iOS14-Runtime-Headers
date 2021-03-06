/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseProductStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _products;

}

@property (nonatomic,retain) NSArray * products;              //@synthesize products=_products - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(NSArray *)products;
-(void)setProducts:(NSArray *)arg1 ;
@end

