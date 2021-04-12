/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class UIView, NSArray, NSObject, UIColor;

@interface SBInteractiveScreenshotGestureCropsView : UIView {

	UIView* _bottomLeftCornerHorizontalView;
	UIView* _bottomLeftCornerVerticalView;
	UIView* _bottomRightCornerHorizontalView;
	UIView* _bottomRightCornerVerticalView;
	UIView* _topLeftCornerHorizontalView;
	UIView* _topLeftCornerVerticalView;
	UIView* _topRightCornerHorizontalView;
	UIView* _topRightCornerVerticalView;
	UIView* _bottomLineView;
	UIView* _bottomLineGrabberView;
	UIView* _leftLineView;
	UIView* _leftLineGrabberView;
	UIView* _rightLineView;
	UIView* _rightLineGrabberView;
	UIView* _topLineView;
	UIView* _topLineGrabberView;
	NSArray* _cornerViews;
	NSArray* _lineViews;
	NSArray* _lineGrabberViews;
	NSObject*<OS_dispatch_queue> _accessQueue;
	double _queue_displayScale;
	double _cornerAlpha;
	double _cornerEdgeLength;
	UIColor* _cornerColor;
	double _lineGrabberAlpha;
	double _lineGrabberEdgeLength;
	UIColor* _lineGrabberColor;
	double _grabberLineWidth;
	double _lineAlpha;
	double _lineWidth;
	UIColor* _lineColor;
	id _cropsCompositingFilter;

}

@property (assign,nonatomic) double cornerAlpha;                        //@synthesize cornerAlpha=_cornerAlpha - In the implementation block
@property (assign,nonatomic) double cornerEdgeLength;                   //@synthesize cornerEdgeLength=_cornerEdgeLength - In the implementation block
@property (nonatomic,retain) UIColor * cornerColor;                     //@synthesize cornerColor=_cornerColor - In the implementation block
@property (assign,nonatomic) double lineGrabberAlpha;                   //@synthesize lineGrabberAlpha=_lineGrabberAlpha - In the implementation block
@property (assign,nonatomic) double lineGrabberEdgeLength;              //@synthesize lineGrabberEdgeLength=_lineGrabberEdgeLength - In the implementation block
@property (nonatomic,retain) UIColor * lineGrabberColor;                //@synthesize lineGrabberColor=_lineGrabberColor - In the implementation block
@property (assign,nonatomic) double grabberLineWidth;                   //@synthesize grabberLineWidth=_grabberLineWidth - In the implementation block
@property (assign,nonatomic) double lineAlpha;                          //@synthesize lineAlpha=_lineAlpha - In the implementation block
@property (assign,nonatomic) double lineWidth;                          //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                       //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) id cropsCompositingFilter;                 //@synthesize cropsCompositingFilter=_cropsCompositingFilter - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)_setPresentationValue:(id)arg1 forKey:(id)arg2 ;
-(UIColor *)cornerColor;
-(double)lineAlpha;
-(void)setLineAlpha:(double)arg1 ;
-(void)_updateGeometryForBounds:(CGRect)arg1 shouldUsePresentationValues:(BOOL)arg2 ;
-(void)_updateGeometryOrDeferLayoutUsingModelBounds;
-(void)setCornerAlpha:(double)arg1 ;
-(void)setCornerColor:(UIColor *)arg1 ;
-(void)setCropsCompositingFilter:(id)arg1 ;
-(void)setCornerEdgeLength:(double)arg1 ;
-(void)setGrabberLineWidth:(double)arg1 ;
-(void)setLineGrabberAlpha:(double)arg1 ;
-(void)setLineGrabberColor:(UIColor *)arg1 ;
-(void)setLineGrabberEdgeLength:(double)arg1 ;
-(double)cornerAlpha;
-(double)cornerEdgeLength;
-(double)lineGrabberAlpha;
-(double)lineGrabberEdgeLength;
-(UIColor *)lineGrabberColor;
-(double)grabberLineWidth;
-(id)cropsCompositingFilter;
@end
