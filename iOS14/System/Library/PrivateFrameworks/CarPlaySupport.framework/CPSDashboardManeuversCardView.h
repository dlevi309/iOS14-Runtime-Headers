/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class NSArray, CPSPrimaryManeuverView, CPSDashboardSecondaryManeuverView, NSString;

@interface CPSDashboardManeuversCardView : UIView <CPSNavigationDisplaying> {

	BOOL _showSecondaryManeuverView;
	NSArray* _maneuvers;
	CPSPrimaryManeuverView* _primaryManeuverView;
	CPSDashboardSecondaryManeuverView* _secondaryManeuverView;
	NSArray* _secondaryManeveuverConstraints;

}

@property (nonatomic,retain) NSArray * maneuvers;                                                    //@synthesize maneuvers=_maneuvers - In the implementation block
@property (nonatomic,retain) CPSPrimaryManeuverView * primaryManeuverView;                           //@synthesize primaryManeuverView=_primaryManeuverView - In the implementation block
@property (nonatomic,retain) CPSDashboardSecondaryManeuverView * secondaryManeuverView;              //@synthesize secondaryManeuverView=_secondaryManeuverView - In the implementation block
@property (nonatomic,retain) NSArray * secondaryManeveuverConstraints;                               //@synthesize secondaryManeveuverConstraints=_secondaryManeveuverConstraints - In the implementation block
@property (assign,nonatomic) BOOL showSecondaryManeuverView;                                         //@synthesize showSecondaryManeuverView=_showSecondaryManeuverView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)layoutSubviews;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(BOOL)wantsLargeSize;
-(CPSPrimaryManeuverView *)primaryManeuverView;
-(BOOL)showSecondaryManeuverView;
-(CPSDashboardSecondaryManeuverView *)secondaryManeuverView;
-(NSArray *)secondaryManeveuverConstraints;
-(void)setSecondaryManeveuverConstraints:(NSArray *)arg1 ;
-(NSArray *)maneuvers;
-(void)setPrimaryManeuverView:(CPSPrimaryManeuverView *)arg1 ;
-(void)setSecondaryManeuverView:(CPSDashboardSecondaryManeuverView *)arg1 ;
-(void)setShowSecondaryManeuverView:(BOOL)arg1 ;
-(void)setManeuvers:(NSArray *)arg1 ;
@end

