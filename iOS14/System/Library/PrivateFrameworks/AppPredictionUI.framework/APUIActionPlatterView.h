/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>

@protocol APUIActionFeedbackDelegate;
@class ATXAction, UIViewController, APUIShortLookViewController, PLPlatterView, NSLayoutConstraint, UITapGestureRecognizer, CRKCardPresentation, NSString;

@interface APUIActionPlatterView : UIView <CRKCardViewControllerDelegate, CRKCardPresentationDelegate> {

	ATXAction* _atxAction;
	unsigned long long _displayType;
	UIViewController* _parentViewController;
	APUIShortLookViewController* _shortLookViewController;
	PLPlatterView* _platterView;
	NSLayoutConstraint* _heightConstraint;
	UITapGestureRecognizer* _tapRecognizer;
	long long _displayContext;
	id<APUIActionFeedbackDelegate> _actionFeedbackDelegate;
	CRKCardPresentation* _cardPresentation;
	UIViewController* _currentCardViewController;

}

@property (nonatomic,retain) CRKCardPresentation * cardPresentation;                                      //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (nonatomic,retain) UIViewController * currentCardViewController;                                //@synthesize currentCardViewController=_currentCardViewController - In the implementation block
@property (assign,nonatomic) long long displayContext;                                                    //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic,__weak) id<APUIActionFeedbackDelegate> actionFeedbackDelegate;                //@synthesize actionFeedbackDelegate=_actionFeedbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
-(long long)displayContext;
-(void)layoutSubviews;
-(void)_tapRecognized:(id)arg1 ;
-(void)setDisplayContext:(long long)arg1 ;
-(long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(void)setCardPresentation:(CRKCardPresentation *)arg1 ;
-(CRKCardPresentation *)cardPresentation;
-(void)setCurrentCardViewController:(UIViewController *)arg1 ;
-(UIViewController *)currentCardViewController;
-(id<APUIActionFeedbackDelegate>)actionFeedbackDelegate;
-(void)setActionFeedbackDelegate:(id<APUIActionFeedbackDelegate>)arg1 ;
-(id)initWithATXAction:(id)arg1 parentViewController:(id)arg2 displayType:(unsigned long long)arg3 ;
-(id)initWithATXAction:(id)arg1 parentViewController:(id)arg2 ;
@end

