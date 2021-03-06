/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HKGraphViewDelegate.h>

@class NSArray, HKScalarGraphViewController, HKLollipopController, UIView, NSString;

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate> {

	NSArray* _graphSeries;
	HKScalarGraphViewController* _graphViewController;
	HKLollipopController* _lollipopController;
	UIView* _header;

}

@property (nonatomic,retain) NSArray * graphSeries;                                                 //@synthesize graphSeries=_graphSeries - In the implementation block
@property (assign,nonatomic,__weak) HKScalarGraphViewController * graphViewController;              //@synthesize graphViewController=_graphViewController - In the implementation block
@property (assign,nonatomic,__weak) HKLollipopController * lollipopController;                      //@synthesize lollipopController=_lollipopController - In the implementation block
@property (assign,nonatomic,__weak) UIView * header;                                                //@synthesize header=_header - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setHeader:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)header;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(long long)stackCountForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)graphViewDidBeginSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2 ;
-(void)graphViewDidEndSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4 ;
-(void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3 ;
-(void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2 ;
-(void)graphViewSizeChanged:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2 ;
-(void)graphViewDidTapYAxis:(id)arg1 ;
-(NSArray *)graphSeries;
-(void)setGraphSeries:(NSArray *)arg1 ;
-(HKScalarGraphViewController *)graphViewController;
-(void)setGraphViewController:(HKScalarGraphViewController *)arg1 ;
-(void)setLollipopController:(HKLollipopController *)arg1 ;
-(HKLollipopController *)lollipopController;
-(void)_alignYAxesForSeries:(id)arg1 ;
@end

