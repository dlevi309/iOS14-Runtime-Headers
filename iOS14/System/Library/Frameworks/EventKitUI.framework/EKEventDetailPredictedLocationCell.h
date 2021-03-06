/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol EKEventDetailPredictedLocationCellDelegate;
@class EKEvent, EKStructuredLocation, EKEventDetailsHighlightControl, UIButton, UIView;

@interface EKEventDetailPredictedLocationCell : UITableViewCell {

	EKEvent* _event;
	EKStructuredLocation* _location;
	EKEventDetailsHighlightControl* _titleControl;
	UIButton* _dismissButton;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	BOOL _showsTopSeparator;
	id<EKEventDetailPredictedLocationCellDelegate> _delegate;

}

@property (__weak) id<EKEventDetailPredictedLocationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsTopSeparator;                                     //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (nonatomic,readonly) UIView * acceptView; 
@property (nonatomic,readonly) UIView * rejectView; 
+(id)_separatorColor;
-(id)init;
-(id<EKEventDetailPredictedLocationCellDelegate>)delegate;
-(void)setDelegate:(id<EKEventDetailPredictedLocationCellDelegate>)arg1 ;
-(id)initEditable:(BOOL)arg1 ;
-(void)confirmLocationTapped:(id)arg1 ;
-(void)rejectLocationTapped:(id)arg1 ;
-(void)_disambiguateIfNeeded;
-(void)_setEventDate:(id)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(UIView *)acceptView;
-(UIView *)rejectView;
-(BOOL)showsTopSeparator;
-(void)setEvent:(id)arg1 ;
@end

