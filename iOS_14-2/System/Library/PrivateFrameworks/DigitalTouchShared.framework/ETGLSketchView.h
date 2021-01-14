/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ETGLSketchRendererDelegate.h>

@class CADisplayLink, UIColor, ETSketchMessage, EAGLContext, ETGLSketchRenderer, ETQuadCurvePointFIFO, ETBoxcarFilterPointFIFO, ETPointFIFO;

@interface ETGLSketchView : UIView <ETGLSketchRendererDelegate> {

	CADisplayLink* _displayLink;
	UIColor* _currentStrokeColor;
	double _lastDisplayLinkTime;
	BOOL _renderingOffscreen;
	unsigned long long _currentStrokeIndex;
	unsigned long long _currentPointIndex;
	unsigned long long _numberOfDrawnStrokes;
	double _renderingDelay;
	double _renderingStartTime;
	double _pauseTime;
	BOOL _playing;
	BOOL _paused;
	BOOL _playbackCompleted;
	BOOL _useFastVerticalWisp;
	float _unitSize;
	ETSketchMessage* _messageData;
	double _wispDelay;
	double _timestampForLastDrawnPoint;
	EAGLContext* _context;
	ETGLSketchRenderer* _renderer;
	ETQuadCurvePointFIFO* _interpolatingFIFO;
	ETBoxcarFilterPointFIFO* _smoothingFIFO;
	ETPointFIFO* _pointFIFO;
	ETQuadCurvePointFIFO* _secondaryInterpolatingFIFO;
	ETBoxcarFilterPointFIFO* _secondarySmoothingFIFO;
	ETPointFIFO* _secondaryPointFIFO;
	unsigned long long _vertexOffset;
	double _delayBetweenStrokes;
	vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > > >* _vertexBatches;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _controlBatches;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _vertexBatchCount;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _secondaryVertexBatchCount;

}

@property (nonatomic,retain) EAGLContext * context;                                                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ETGLSketchRenderer * renderer;                                                                //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) ETQuadCurvePointFIFO * interpolatingFIFO;                                                     //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (nonatomic,retain) ETBoxcarFilterPointFIFO * smoothingFIFO;                                                      //@synthesize smoothingFIFO=_smoothingFIFO - In the implementation block
@property (nonatomic,retain) ETPointFIFO * pointFIFO;                                                                      //@synthesize pointFIFO=_pointFIFO - In the implementation block
@property (nonatomic,retain) ETQuadCurvePointFIFO * secondaryInterpolatingFIFO;                                            //@synthesize secondaryInterpolatingFIFO=_secondaryInterpolatingFIFO - In the implementation block
@property (nonatomic,retain) ETBoxcarFilterPointFIFO * secondarySmoothingFIFO;                                             //@synthesize secondarySmoothingFIFO=_secondarySmoothingFIFO - In the implementation block
@property (nonatomic,retain) ETPointFIFO * secondaryPointFIFO;                                                             //@synthesize secondaryPointFIFO=_secondaryPointFIFO - In the implementation block
@property (assign,nonatomic) float unitSize;                                                                               //@synthesize unitSize=_unitSize - In the implementation block
@property (assign,nonatomic) vector<std::__1::vector<float __attribute__((ext_vector_type(2))) vertexBatches;              //@synthesize vertexBatches=_vertexBatches - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) controlBatches;                              //@synthesize controlBatches=_controlBatches - In the implementation block
@property (assign,nonatomic) vector<unsigned long vertexBatchCount;                                                        //@synthesize vertexBatchCount=_vertexBatchCount - In the implementation block
@property (assign,nonatomic) vector<unsigned long secondaryVertexBatchCount;                                               //@synthesize secondaryVertexBatchCount=_secondaryVertexBatchCount - In the implementation block
@property (assign,nonatomic) unsigned long long vertexOffset;                                                              //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) double delayBetweenStrokes;                                                                   //@synthesize delayBetweenStrokes=_delayBetweenStrokes - In the implementation block
@property (nonatomic,retain) ETSketchMessage * messageData;                                                                //@synthesize messageData=_messageData - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                                                //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                                  //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double wispDelay;                                                                             //@synthesize wispDelay=_wispDelay - In the implementation block
@property (assign,nonatomic) double timestampForLastDrawnPoint;                                                            //@synthesize timestampForLastDrawnPoint=_timestampForLastDrawnPoint - In the implementation block
@property (assign,nonatomic) BOOL playbackCompleted;                                                                       //@synthesize playbackCompleted=_playbackCompleted - In the implementation block
@property (assign,nonatomic) BOOL useFastVerticalWisp;                                                                     //@synthesize useFastVerticalWisp=_useFastVerticalWisp - In the implementation block
+(Class)layerClass;
-(void)clear;
-(BOOL)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setInterpolatingFIFO:(ETQuadCurvePointFIFO *)arg1 ;
-(ETQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setSmoothingFIFO:(ETBoxcarFilterPointFIFO *)arg1 ;
-(EAGLContext *)context;
-(ETGLSketchRenderer *)renderer;
-(void)setRenderer:(ETGLSketchRenderer *)arg1 ;
-(void)layoutSubviews;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(void)setMessageData:(ETSketchMessage *)arg1 ;
-(float)unitSize;
-(BOOL)isPaused;
-(ETSketchMessage *)messageData;
-(ETBoxcarFilterPointFIFO *)smoothingFIFO;
-(void)setContext:(EAGLContext *)arg1 ;
-(void)setUnitSize:(float)arg1 ;
-(void)setGLContextAsCurrent;
-(void)setUseFastVerticalWisp:(BOOL)arg1 ;
-(void)updateRendererWithPoints:(1*)arg1 count:(unsigned long long)arg2 controlPoint:(3*)arg3 flush:(BOOL)arg4 ;
-(void)updateRendererWithSecondaryPoints:(1*)arg1 count:(unsigned long long)arg2 controlPoint:(3*)arg3 flush:(BOOL)arg4 ;
-(void)setWispDelay:(double)arg1 ;
-(void)beginStrokeWithColor:(id)arg1 ;
-(void)handleTapAtPosition:(CGPoint)arg1 ;
-(void)handleSketchAtPosition:(CGPoint)arg1 ;
-(void)didCompleteStroke;
-(void)_endPlayback;
-(void)_drawCurrentPointAdvancingPlayback;
-(BOOL)_getCurrentSketchPoint:(SCD_Struct_ET14*)arg1 ;
-(BOOL)_doesPoint:(SCD_Struct_ET14*)arg1 predateTime:(double)arg2 ;
-(void)drawView:(id)arg1 ;
-(void)clearAllPoints;
-(void)sketchRendererDidReachVertexLimit:(id)arg1 ;
-(void)drawFrameBeforeWisp;
-(CGImageRef)createRenderedFrameImage;
-(CGImageRef)createImageForTime:(double)arg1 ;
-(double)wispDelay;
-(double)timestampForLastDrawnPoint;
-(void)setTimestampForLastDrawnPoint:(double)arg1 ;
-(BOOL)playbackCompleted;
-(void)setPlaybackCompleted:(BOOL)arg1 ;
-(BOOL)useFastVerticalWisp;
-(ETPointFIFO *)pointFIFO;
-(void)setPointFIFO:(ETPointFIFO *)arg1 ;
-(ETQuadCurvePointFIFO *)secondaryInterpolatingFIFO;
-(void)setSecondaryInterpolatingFIFO:(ETQuadCurvePointFIFO *)arg1 ;
-(ETBoxcarFilterPointFIFO *)secondarySmoothingFIFO;
-(void)setSecondarySmoothingFIFO:(ETBoxcarFilterPointFIFO *)arg1 ;
-(ETPointFIFO *)secondaryPointFIFO;
-(void)setSecondaryPointFIFO:(ETPointFIFO *)arg1 ;
-(vector<std::__1::vector<float __attribute__((ext_vector_type(2))))vertexBatches;
-(void)setVertexBatches:(vector<std::__1::vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(vector<float __attribute__((ext_vector_type(2))))controlBatches;
-(void)setControlBatches:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(vector<unsigned long)vertexBatchCount;
-(void)setVertexBatchCount:(vector<unsigned long)arg1 ;
-(vector<unsigned long)secondaryVertexBatchCount;
-(void)setSecondaryVertexBatchCount:(vector<unsigned long)arg1 ;
-(unsigned long long)vertexOffset;
-(void)setVertexOffset:(unsigned long long)arg1 ;
-(double)delayBetweenStrokes;
-(void)setDelayBetweenStrokes:(double)arg1 ;
@end
