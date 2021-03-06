/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>

@class HKInteractiveChartViewController, HKAnnotationDisplayType, NSString;

@interface HKAnnotationOverlayManager : NSObject <HKInteractiveChartViewObserver> {

	HKInteractiveChartViewController* _chartViewController;
	HKAnnotationDisplayType* _currentOverlayDisplayType;

}

@property (nonatomic,readonly) HKInteractiveChartViewController * chartViewController;              //@synthesize chartViewController=_chartViewController - In the implementation block
@property (nonatomic,retain) HKAnnotationDisplayType * currentOverlayDisplayType;                   //@synthesize currentOverlayDisplayType=_currentOverlayDisplayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKInteractiveChartViewController *)chartViewController;
-(void)dealloc;
-(void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3 ;
-(HKAnnotationDisplayType *)currentOverlayDisplayType;
-(void)removeAnnotationOverlay;
-(void)setCurrentOverlayDisplayType:(HKAnnotationDisplayType *)arg1 ;
-(id)initWithInteractiveChart:(id)arg1 ;
-(void)installAnnotationOverlayForRange:(id)arg1 trendData:(id)arg2 ;
@end

