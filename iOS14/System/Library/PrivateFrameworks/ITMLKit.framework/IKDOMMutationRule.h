/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKDOMConditional.h>

@interface IKDOMMutationRule : IKDOMConditional {

	BOOL _mutable;

}

@property (getter=isMutable,nonatomic,readonly) BOOL mutable;              //@synthesize mutable=_mutable - In the implementation block
+(id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)mutationRuleWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isMutable;
-(id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(void)applyOnDOMElement:(id)arg1 ;
@end
