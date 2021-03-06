/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@protocol ETMessageDelegate, ETMessageTimeSource;
#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
@class NSMutableSet, NSString, UIColor;

@interface ETMessage : NSObject {

	NSMutableSet* _childrenDelayingWisp;
	BOOL _supportsPlaybackTimeOffset;
	BOOL _missedDuringPlayback;
	BOOL _renderingOffscreen;
	BOOL _renderingOffscreenOpaque;
	BOOL _delayWisp;
	BOOL _mute;
	unsigned long long _messageVersion;
	double _timeCreated;
	double _sendTime;
	double _startDelay;
	NSString* _identifier;
	UIColor* _color;
	id<ETMessageDelegate> _delegate;
	id<ETMessageTimeSource> _timeSource;
	ETMessage* _parentMessage;

}

@property (nonatomic,readonly) unsigned short messageType; 
@property (nonatomic,readonly) unsigned long long messageVersion;                                          //@synthesize messageVersion=_messageVersion - In the implementation block
@property (assign,nonatomic) double timeCreated;                                                           //@synthesize timeCreated=_timeCreated - In the implementation block
@property (assign,nonatomic) double sendTime;                                                              //@synthesize sendTime=_sendTime - In the implementation block
@property (assign,nonatomic) double startDelay;                                                            //@synthesize startDelay=_startDelay - In the implementation block
@property (assign,nonatomic) BOOL supportsPlaybackTimeOffset;                                              //@synthesize supportsPlaybackTimeOffset=_supportsPlaybackTimeOffset - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL missedDuringPlayback;                                                    //@synthesize missedDuringPlayback=_missedDuringPlayback - In the implementation block
@property (nonatomic,readonly) BOOL shouldLoopDuringPlayback; 
@property (nonatomic,retain) UIColor * color;                                                              //@synthesize color=_color - In the implementation block
@property (assign,getter=isRenderingOffscreen,nonatomic) BOOL renderingOffscreen;                          //@synthesize renderingOffscreen=_renderingOffscreen - In the implementation block
@property (assign,getter=isRenderingOffscreenOpaque,nonatomic) BOOL renderingOffscreenOpaque;              //@synthesize renderingOffscreenOpaque=_renderingOffscreenOpaque - In the implementation block
@property (nonatomic,readonly) double messageDuration; 
@property (assign,nonatomic,__weak) id<ETMessageDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ETMessageTimeSource> timeSource;                                    //@synthesize timeSource=_timeSource - In the implementation block
@property (assign,nonatomic) BOOL delayWisp;                                                               //@synthesize delayWisp=_delayWisp - In the implementation block
@property (assign,nonatomic,__weak) ETMessage * parentMessage;                                             //@synthesize parentMessage=_parentMessage - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (assign,nonatomic) BOOL mute;                                                                    //@synthesize mute=_mute - In the implementation block
+(unsigned short)messageType;
+(id)unarchive:(id)arg1 ;
-(BOOL)isAnimated;
-(unsigned short)messageType;
-(id)init;
-(id<ETMessageDelegate>)delegate;
-(id)archive;
-(UIColor *)color;
-(void)setMute:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ETMessageDelegate>)arg1 ;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(double)startDelay;
-(BOOL)mute;
-(id)initWithCoder:(id)arg1 ;
-(void)stopPlaying;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)archiveData;
-(void)setStartDelay:(double)arg1 ;
-(unsigned long long)messageVersion;
-(BOOL)isRenderingOffscreen;
-(void)setRenderingOffscreen:(BOOL)arg1 ;
-(BOOL)supportsPlaybackTimeOffset;
-(BOOL)delayWisp;
-(BOOL)isRenderingOffscreenOpaque;
-(id<ETMessageTimeSource>)timeSource;
-(id)initWithArchiveData:(id)arg1 ;
-(ETMessage *)parentMessage;
-(void)childMessageDidDelayWisp:(id)arg1 ;
-(void)setParentMessage:(ETMessage *)arg1 ;
-(void)setDelayWisp:(BOOL)arg1 ;
-(void)setSupportsPlaybackTimeOffset:(BOOL)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(BOOL)shouldLoopDuringPlayback;
-(void)setTimeSource:(id<ETMessageTimeSource>)arg1 ;
-(double)timeCreated;
-(void)displayInScene:(id)arg1 ;
-(BOOL)reachedSizeLimit;
-(void)preVisualizeInScene:(id)arg1 ;
-(void)setSendTime:(double)arg1 ;
-(double)sendTime;
-(BOOL)sendTimeIsValid;
-(void)_stopAudioPlayback;
-(void)_startAudioPlayback;
-(CGPoint)scenePointFromNormalizedPoint:(CGPoint)arg1 inScene:(id)arg2 ;
-(void)wispChildren;
-(void)childMessageDidCompleteWisp:(id)arg1 ;
-(BOOL)hasWispingChildren;
-(void)setTimeCreated:(double)arg1 ;
-(BOOL)missedDuringPlayback;
-(void)setMissedDuringPlayback:(BOOL)arg1 ;
-(void)setRenderingOffscreenOpaque:(BOOL)arg1 ;
@end

