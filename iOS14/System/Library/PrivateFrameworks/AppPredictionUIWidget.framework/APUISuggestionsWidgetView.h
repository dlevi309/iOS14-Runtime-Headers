/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/AppPredictionUIWidget-Structs.h>
#import <UIKitCore/UIView.h>

@protocol APUISuggestionsWidgetViewDelegate;
@class ATXSuggestionLayout, NSMutableArray, UIStackView;

@interface APUISuggestionsWidgetView : UIView {

	ATXSuggestionLayout* _suggestionLayout;
	unsigned long long _platterSize;
	NSMutableArray* _containerViews;
	id<APUISuggestionsWidgetViewDelegate> _delegate;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) id<APUISuggestionsWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_shouldDisplayRecentDonationsOrUpcomingMediaForTesting;
+(id)_developerModeSuggestions:(unsigned long long)arg1 ;
-(id<APUISuggestionsWidgetViewDelegate>)delegate;
-(UIStackView *)stackView;
-(void)setDelegate:(id<APUISuggestionsWidgetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)updateWithSuggestionLayout:(id)arg1 ;
-(void)highlightSuggestion:(id)arg1 ;
-(id)suggestionAtLocation:(CGPoint)arg1 ;
-(void)_setupStackViewIfNecessary;
-(void)_layout1x4WithRowCount:(unsigned long long)arg1 ;
-(void)_layoutOne2x2;
-(void)_layoutNotSupported:(long long)arg1 ;
-(void)_displayNoSuggestions;
-(void)logLayoutSuggestions:(id)arg1 ;
-(void)_addFullWidthWidgetContainerViewWithSuggestion:(id)arg1 withTopSeparator:(BOOL)arg2 ;
-(void)_checkSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_addWidgetContainerViewWithSuggestion:(id)arg1 toVerticalStackView:(id)arg2 ;
-(id)_validSuggestionsWithSuggestions:(id)arg1 ;
-(BOOL)_hasBundleInstalledAndNotRestrictedForSuggestion:(id)arg1 ;
-(void)addSeparatorViewToView:(id)arg1 ;
-(id)_createWidgetContainerViewWithSuggestion:(id)arg1 ;
@end

