/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPGSVSectionHeaderView.h>

@protocol PKPGSVSectionHeaderView <NSObject>
@required
-(BOOL)needsUpdate;
-(id)trailingView;
-(id)leadingView;

@end


@protocol PKPGSVSectionHeaderViewDelegate;
@class UILabel, UIButton, UIActivityIndicatorView, NSString;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView> {

	BOOL _sizesDirty;
	UILabel* _titleView;
	UILabel* _environmentLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	UIEdgeInsets _margins;
	id<PKPGSVSectionHeaderViewDelegate> _delegate;
	BOOL _showActivityIndicator;
	unsigned long long _passType;

}

@property (nonatomic,readonly) unsigned long long passType;              //@synthesize passType=_passType - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                 //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)needsUpdate;
-(unsigned long long)passType;
-(id)init;
-(void)layoutSubviews;
-(id)trailingView;
-(id)leadingView;
-(BOOL)showActivityIndicator;
-(void)addTapped;
-(void)_addTapped;
-(id)initWithPassType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(BOOL)_shouldShowMoreInfoButtonForBarcodePass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
@end

