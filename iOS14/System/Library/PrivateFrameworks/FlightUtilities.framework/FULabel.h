/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <TemplateKit/TLKLabel.h>

@class NSString, NSAttributedString;

@interface FULabel : TLKLabel {

	NSString* _stringValue;
	NSAttributedString* _attributedStringValue;
	FULabel* _realAssociatedScalingLabel;
	BOOL _uppercase;
	BOOL _useCurrentLocale;
	/*^block*/id _onTap;
	FULabel* _associatedScalingLabel;

}

@property (copy) id onTap;                                                         //@synthesize onTap=_onTap - In the implementation block
@property (nonatomic,readonly) BOOL uppercase;                                     //@synthesize uppercase=_uppercase - In the implementation block
@property (readonly) BOOL useCurrentLocale;                                        //@synthesize useCurrentLocale=_useCurrentLocale - In the implementation block
@property (assign,nonatomic,__weak) FULabel * associatedScalingLabel;              //@synthesize associatedScalingLabel=_associatedScalingLabel - In the implementation block
-(void)setAttributedText:(id)arg1 ;
-(void)performTap:(id)arg1 ;
-(BOOL)useCurrentLocale;
-(void)setText:(id)arg1 ;
-(id)onTap;
-(FULabel *)associatedScalingLabel;
-(BOOL)uppercase;
-(void)layoutSubviews;
-(void)setAssociatedLabel:(id)arg1 ;
-(void)setAssociatedScalingLabel:(FULabel *)arg1 ;
-(void)setUppercase:(BOOL)arg1 usingCurrentLocale:(BOOL)arg2 ;
-(void)awakeFromNib;
-(void)setStyleProvider:(id)arg1 primaryStyle:(BOOL)arg2 ;
-(id)_associatedScalingLabel;
-(void)setOnTap:(id)arg1 ;
@end
