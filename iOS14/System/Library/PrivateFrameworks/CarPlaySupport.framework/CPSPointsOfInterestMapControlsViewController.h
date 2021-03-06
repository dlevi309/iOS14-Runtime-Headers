/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSPointsOfInterestMapDelegate;
@class CPSEntityMapButton, NSString;

@interface CPSPointsOfInterestMapControlsViewController : UIViewController <CPSButtonDelegate, CPSLinearFocusProviding> {

	id<CPSPointsOfInterestMapDelegate> _mapDelegate;
	CPSEntityMapButton* _zoomInButton;
	CPSEntityMapButton* _zoomOutButton;
	CPSEntityMapButton* _panButton;
	CPSEntityMapButton* _centerButton;

}

@property (assign,nonatomic,__weak) id<CPSPointsOfInterestMapDelegate> mapDelegate;              //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (nonatomic,retain) CPSEntityMapButton * zoomInButton;                                  //@synthesize zoomInButton=_zoomInButton - In the implementation block
@property (nonatomic,retain) CPSEntityMapButton * zoomOutButton;                                 //@synthesize zoomOutButton=_zoomOutButton - In the implementation block
@property (nonatomic,retain) CPSEntityMapButton * panButton;                                     //@synthesize panButton=_panButton - In the implementation block
@property (nonatomic,retain) CPSEntityMapButton * centerButton;                                  //@synthesize centerButton=_centerButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
-(void)setMapDelegate:(id<CPSPointsOfInterestMapDelegate>)arg1 ;
-(id<CPSPointsOfInterestMapDelegate>)mapDelegate;
-(void)viewDidLoad;
-(void)setupViews;
-(CPSEntityMapButton *)centerButton;
-(void)didSelectButton:(id)arg1 ;
-(id)_linearFocusItems;
-(id)initWithMapDelegate:(id)arg1 ;
-(CPSEntityMapButton *)zoomInButton;
-(CPSEntityMapButton *)zoomOutButton;
-(void)setPanButton:(CPSEntityMapButton *)arg1 ;
-(CPSEntityMapButton *)panButton;
-(void)setZoomInButton:(CPSEntityMapButton *)arg1 ;
-(void)setZoomOutButton:(CPSEntityMapButton *)arg1 ;
-(void)setCenterButton:(CPSEntityMapButton *)arg1 ;
-(void)zoomInPressed:(id)arg1 ;
-(void)zoomOutPressed:(id)arg1 ;
-(void)panPressed:(id)arg1 ;
-(void)centerPressed:(id)arg1 ;
@end

