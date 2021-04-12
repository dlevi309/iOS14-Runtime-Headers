/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class UIFont, NSNumber;

@interface PKPassFieldTemplate : NSObject {

	UIFont* _labelFont;
	UIFont* _valueFont;
	Class _viewSubclass;
	NSNumber* _boxedTextAlignment;
	NSNumber* _boxedVerticalPadding;
	NSNumber* _boxedSuppressesLabel;
	NSNumber* _boxedLabelCaseStyle;
	NSNumber* _boxedValueSignificant;
	NSNumber* _boxedValueCanWrap;
	NSNumber* _boxedSuppressesEmptyLabel;

}

@property (nonatomic,retain) NSNumber * boxedTextAlignment;                     //@synthesize boxedTextAlignment=_boxedTextAlignment - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVerticalPadding;                   //@synthesize boxedVerticalPadding=_boxedVerticalPadding - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesLabel;                   //@synthesize boxedSuppressesLabel=_boxedSuppressesLabel - In the implementation block
@property (nonatomic,retain) NSNumber * boxedLabelCaseStyle;                    //@synthesize boxedLabelCaseStyle=_boxedLabelCaseStyle - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueSignificant;                  //@synthesize boxedValueSignificant=_boxedValueSignificant - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueCanWrap;                      //@synthesize boxedValueCanWrap=_boxedValueCanWrap - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesEmptyLabel;              //@synthesize boxedSuppressesEmptyLabel=_boxedSuppressesEmptyLabel - In the implementation block
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double verticalPadding; 
@property (nonatomic,retain) UIFont * labelFont;                                //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL suppressesLabel; 
@property (assign,nonatomic) BOOL suppressesEmptyLabel; 
@property (assign,nonatomic) long long labelCaseStyle; 
@property (assign,nonatomic) BOOL valueSignificant; 
@property (assign,nonatomic) BOOL valueCanWrap; 
@property (nonatomic,retain) Class viewSubclass;                                //@synthesize viewSubclass=_viewSubclass - In the implementation block
+(id)fieldTemplateWithTextAlignment:(long long)arg1 ;
+(id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2 ;
+(id)fieldTemplateWithVerticalPadding:(double)arg1 ;
+(id)fieldTemplateWithViewSubclass:(Class)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(UIFont *)valueFont;
-(void)setViewSubclass:(Class)arg1 ;
-(NSNumber *)boxedTextAlignment;
-(void)setBoxedTextAlignment:(NSNumber *)arg1 ;
-(NSNumber *)boxedVerticalPadding;
-(void)setBoxedVerticalPadding:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesLabel;
-(void)setBoxedSuppressesLabel:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesEmptyLabel;
-(void)setBoxedSuppressesEmptyLabel:(NSNumber *)arg1 ;
-(void)setBoxedLabelCaseStyle:(NSNumber *)arg1 ;
-(NSNumber *)boxedValueSignificant;
-(void)setBoxedValueSignificant:(NSNumber *)arg1 ;
-(NSNumber *)boxedValueCanWrap;
-(void)setBoxedValueCanWrap:(NSNumber *)arg1 ;
-(NSNumber *)boxedLabelCaseStyle;
-(Class)viewSubclass;
-(BOOL)suppressesLabel;
-(void)setSuppressesLabel:(BOOL)arg1 ;
-(BOOL)suppressesEmptyLabel;
-(void)setSuppressesEmptyLabel:(BOOL)arg1 ;
-(long long)labelCaseStyle;
-(void)setLabelCaseStyle:(long long)arg1 ;
-(BOOL)valueSignificant;
-(void)setValueSignificant:(BOOL)arg1 ;
-(BOOL)valueCanWrap;
-(void)setValueCanWrap:(BOOL)arg1 ;
@end
