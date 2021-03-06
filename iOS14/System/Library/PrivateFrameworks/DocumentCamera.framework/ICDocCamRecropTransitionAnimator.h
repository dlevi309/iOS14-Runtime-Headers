/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIImage, NSIndexPath, UIView, ICDocCamImageQuad, NSString;

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIImage* _filteredImage;
	UIImage* _unfilteredImage;
	NSIndexPath* _indexPath;
	double _duration;
	/*^block*/id _completion;
	long long _orientation;
	UIView* _startView;
	ICDocCamImageQuad* _quadForOverlay;
	CGRect _containerViewFrame;

}

@property (nonatomic,retain) UIImage * filteredImage;                         //@synthesize filteredImage=_filteredImage - In the implementation block
@property (nonatomic,retain) UIImage * unfilteredImage;                       //@synthesize unfilteredImage=_unfilteredImage - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                         //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGRect containerViewFrame;                       //@synthesize containerViewFrame=_containerViewFrame - In the implementation block
@property (assign,nonatomic,__weak) UIView * startView;                       //@synthesize startView=_startView - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuad * quadForOverlay;              //@synthesize quadForOverlay=_quadForOverlay - In the implementation block
@property (assign,nonatomic) BOOL presenting;                                 //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(UIView *)startView;
-(id)completion;
-(BOOL)presenting;
-(void)setStartView:(UIView *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(long long)orientation;
-(double)duration;
-(void)setOrientation:(long long)arg1 ;
-(void)setContainerViewFrame:(CGRect)arg1 ;
-(void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3 ;
-(void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3 ;
-(ICDocCamImageQuad *)quadForOverlay;
-(void)setQuadForOverlay:(ICDocCamImageQuad *)arg1 ;
-(id)scrollViewTransform:(BOOL)arg1 ;
-(id)imageMeshTransform:(BOOL)arg1 ;
-(void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3 ;
-(UIImage *)unfilteredImage;
-(UIImage *)filteredImage;
-(SCD_Struct_IC3)matrixTransformingQuadForOverlayToImageView:(BOOL*)arg1 ;
-(CGRect)containerViewFrame;
-(void)sortPoints:(CGPoint*)arg1 sorted:(CGPoint*)arg2 ;
-(SCD_Struct_IC3)matrixTransformingToUnitSquareWithPoints:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 x2:(double)arg5 y2:(double)arg6 x3:(double)arg7 y3:(double)arg8 ;
-(id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)setFilteredImage:(UIImage *)arg1 ;
-(void)setUnfilteredImage:(UIImage *)arg1 ;
@end

