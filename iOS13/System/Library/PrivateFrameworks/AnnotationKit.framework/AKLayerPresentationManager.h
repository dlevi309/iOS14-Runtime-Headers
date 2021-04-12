/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKPageController, CALayer, NSMapTable, CAShapeLayer, AKPageModelController;

@interface AKLayerPresentationManager : NSObject {

	BOOL _shouldPixelate;
	BOOL _adornmentsHidden;
	BOOL _isObservingModel;
	AKPageController* _pageController;
	CALayer* _rootLayer;
	double _alignmentGuidePositionX;
	double _alignmentGuidePositionY;
	NSMapTable* _annotationsToAnnotationLayers;
	NSMapTable* _annotationsToAdornmentLayers;
	CALayer* _cropAnnotationLayer;
	CALayer* _cropAdornmentLayer;
	CAShapeLayer* _alignmentGuideXLayer;
	CAShapeLayer* _alignmentGuideYLayer;
	AKPageModelController* _pageModelController;
	double _currentScaleFactor;

}

@property (__weak) AKPageController * pageController;                        //@synthesize pageController=_pageController - In the implementation block
@property (retain) CALayer * rootLayer;                                      //@synthesize rootLayer=_rootLayer - In the implementation block
@property (retain) NSMapTable * annotationsToAnnotationLayers;               //@synthesize annotationsToAnnotationLayers=_annotationsToAnnotationLayers - In the implementation block
@property (retain) NSMapTable * annotationsToAdornmentLayers;                //@synthesize annotationsToAdornmentLayers=_annotationsToAdornmentLayers - In the implementation block
@property (retain) CALayer * cropAnnotationLayer;                            //@synthesize cropAnnotationLayer=_cropAnnotationLayer - In the implementation block
@property (retain) CALayer * cropAdornmentLayer;                             //@synthesize cropAdornmentLayer=_cropAdornmentLayer - In the implementation block
@property (retain) CAShapeLayer * alignmentGuideXLayer;                      //@synthesize alignmentGuideXLayer=_alignmentGuideXLayer - In the implementation block
@property (retain) CAShapeLayer * alignmentGuideYLayer;                      //@synthesize alignmentGuideYLayer=_alignmentGuideYLayer - In the implementation block
@property (retain) AKPageModelController * pageModelController;              //@synthesize pageModelController=_pageModelController - In the implementation block
@property (assign) BOOL isObservingModel;                                    //@synthesize isObservingModel=_isObservingModel - In the implementation block
@property (assign) double currentScaleFactor;                                //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldPixelate;                            //@synthesize shouldPixelate=_shouldPixelate - In the implementation block
@property (assign,nonatomic) BOOL adornmentsHidden;                          //@synthesize adornmentsHidden=_adornmentsHidden - In the implementation block
@property (assign,nonatomic) double alignmentGuidePositionX;                 //@synthesize alignmentGuidePositionX=_alignmentGuidePositionX - In the implementation block
@property (assign,nonatomic) double alignmentGuidePositionY;                 //@synthesize alignmentGuidePositionY=_alignmentGuidePositionY - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)teardown;
-(CALayer *)rootLayer;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)setup;
-(double)currentScaleFactor;
-(id)initWithPageController:(id)arg1 ;
-(AKPageModelController *)pageModelController;
-(void)setAlignmentGuidePositionX:(double)arg1 ;
-(void)setAlignmentGuidePositionY:(double)arg1 ;
-(void)setShouldPixelate:(BOOL)arg1 ;
-(void)setAdornmentsHidden:(BOOL)arg1 ;
-(void)setCurrentScaleFactor:(double)arg1 ;
-(void)setPageModelController:(AKPageModelController *)arg1 ;
-(BOOL)shouldPixelate;
-(void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(void)forceUpdateAnnotationLayer:(id)arg1 ;
-(void)setAnnotationsToAnnotationLayers:(NSMapTable *)arg1 ;
-(void)setAnnotationsToAdornmentLayers:(NSMapTable *)arg1 ;
-(void)_startObservingModel;
-(void)_stopObservingModel;
-(NSMapTable *)annotationsToAdornmentLayers;
-(void)_applyUpdatesWithScale:(double)arg1 toLayers:(id)arg2 isLiveUpdate:(BOOL)arg3 forceUpdate:(BOOL)arg4 ;
-(CAShapeLayer *)alignmentGuideXLayer;
-(void)setAlignmentGuideXLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)alignmentGuideYLayer;
-(void)setAlignmentGuideYLayer:(CAShapeLayer *)arg1 ;
-(void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg1 ;
-(void)_removeAdornmentLayerForAnnotation:(id)arg1 ;
-(void)_removeLayerForAnnotation:(id)arg1 ;
-(void)_addLayerForAnnotation:(id)arg1 ;
-(void)_addAdornmentLayerForAnnotation:(id)arg1 ;
-(void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg1 ;
-(NSMapTable *)annotationsToAnnotationLayers;
-(double)_hiDPIScaleFactor;
-(BOOL)isObservingModel;
-(void)setIsObservingModel:(BOOL)arg1 ;
-(void)setCropAnnotationLayer:(CALayer *)arg1 ;
-(void)_setNeedsDisplayOnNewLayer:(id)arg1 ;
-(CALayer *)cropAnnotationLayer;
-(void)setCropAdornmentLayer:(CALayer *)arg1 ;
-(CALayer *)cropAdornmentLayer;
-(BOOL)adornmentsHidden;
-(double)alignmentGuidePositionX;
-(double)alignmentGuidePositionY;
@end
