/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class INPaymentMethod;

@interface WFPaymentMethodContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) INPaymentMethod * paymentMethod; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
-(INPaymentMethod *)paymentMethod;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

