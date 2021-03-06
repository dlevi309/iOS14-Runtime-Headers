/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface CompositionItem : NSObject {

	BOOL m_isFinalClip;
	BOOL m_isMuted;
	BOOL m_isFreezeFrame;
	SCD_Struct_PM9 m_sourceTimeRange;
	SCD_Struct_PM8 m_destinationDuration;
	SCD_Struct_PM8 m_leftTransitionExtension;
	SCD_Struct_PM8 m_rightTransitionExtension;
	SCD_Struct_PM8 m_audioStartOffset;
	SCD_Struct_PM8 m_audioEndOffset;
	float m_speed;
	KonaClip* _clip;

}

@property (nonatomic,retain) KonaClip * clip;                                      //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip; 
@property (assign,nonatomic) SCD_Struct_PM9 sourceTimeRange; 
@property (assign,nonatomic) SCD_Struct_PM8 destinationDuration; 
@property (assign,nonatomic) SCD_Struct_PM8 leftTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_PM8 rightTransitionExtension; 
@property (assign,nonatomic) SCD_Struct_PM8 audioStartOffset; 
@property (assign,nonatomic) SCD_Struct_PM8 audioEndOffset; 
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL isFreezeFrame; 
@property (assign,nonatomic) float speed; 
+(id)compositionItemWithClip:(id)arg1 ;
-(KonaClip *)clip;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(id)debugDescription;
-(id)description;
-(void)setClip:(KonaClip *)arg1 ;
-(BOOL)isMuted;
-(void)setSourceTimeRange:(SCD_Struct_PM9)arg1 ;
-(SCD_Struct_PM9)sourceTimeRange;
-(void)dealloc;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_PM9)arg1 ;
-(BOOL)isFinalClip;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_PM8)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM9)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 paddedFromTime:(SCD_Struct_PM8)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM9)arg1 ;
-(SCD_Struct_PM8)audioStartOffset;
-(void)setAudioStartOffset:(SCD_Struct_PM8)arg1 ;
-(SCD_Struct_PM8)audioEndOffset;
-(void)setAudioEndOffset:(SCD_Struct_PM8)arg1 ;
-(void)setIsFinalClip:(BOOL)arg1 ;
-(void)setDestinationDuration:(SCD_Struct_PM8)arg1 ;
-(SCD_Struct_PM8)destinationDuration;
-(BOOL)isFreezeFrame;
-(id)initWithClip:(id)arg1 ;
-(id)metaDataVideoAssetURL;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(SCD_Struct_PM9)arg1 ;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 ;
-(SCD_Struct_PM8)leftTransitionExtension;
-(SCD_Struct_PM8)rightTransitionExtension;
-(void)setLeftTransitionExtension:(SCD_Struct_PM8)arg1 ;
-(void)setRightTransitionExtension:(SCD_Struct_PM8)arg1 ;
@end

