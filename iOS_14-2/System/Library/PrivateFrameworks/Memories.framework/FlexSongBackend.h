/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/FlexSongProtocol.h>

@class NSString, NSSet, NSArray, UIImage, NSDictionary;

@interface FlexSongBackend : NSObject <FlexSongProtocol> {

	BOOL _hidden;
	BOOL _recalled;
	UIImage* _cachedArtwork;
	NSString* _uid;
	NSString* _audioEncoderPresetName;
	NSString* _songName;
	NSString* _artistName;
	NSSet* _tagIDs;
	NSSet* _keywords;
	NSArray* _assets;
	NSString* _songFormat;
	long long _sampleRate;
	long long _metadataVersion;
	NSDictionary* _customOptions;

}

@property (nonatomic,retain) NSString * uid;                                 //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * audioEncoderPresetName;              //@synthesize audioEncoderPresetName=_audioEncoderPresetName - In the implementation block
@property (nonatomic,retain) NSString * songName;                            //@synthesize songName=_songName - In the implementation block
@property (nonatomic,retain) NSString * artistName;                          //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSSet * tagIDs;                                 //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,retain) NSSet * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) UIImage * artwork;                              //@synthesize cachedArtwork=_cachedArtwork - In the implementation block
@property (nonatomic,retain) NSString * songFormat;                          //@synthesize songFormat=_songFormat - In the implementation block
@property (assign,nonatomic) long long sampleRate;                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL recalled;                                  //@synthesize recalled=_recalled - In the implementation block
@property (assign,nonatomic) long long metadataVersion;                      //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * customOptions;                   //@synthesize customOptions=_customOptions - In the implementation block
-(NSArray *)assets;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)uid;
-(void)setTagIDs:(NSSet *)arg1 ;
-(BOOL)hidden;
-(void)setKeywords:(NSSet *)arg1 ;
-(void)updateAssets:(id)arg1 ;
-(BOOL)canPlay;
-(NSSet *)keywords;
-(void)setArtwork:(UIImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(NSSet *)tagIDs;
-(NSString *)artistName;
-(void)setMetadataVersion:(long long)arg1 ;
-(long long)metadataVersion;
-(UIImage *)artwork;
-(void)setSampleRate:(long long)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(BOOL)isLoaded;
-(long long)sampleRate;
-(SCD_Struct_PM8)minimumDuration;
-(NSString *)songName;
-(id)assetWithID:(id)arg1 ;
-(BOOL)recalled;
-(void)setSongName:(NSString *)arg1 ;
-(SCD_Struct_PM8)naturalDuration;
-(id)existingAssetWithID:(id)arg1 ;
-(NSString *)songFormat;
-(void)updateSongArtist:(id)arg1 title:(id)arg2 tags:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 recalled:(BOOL)arg6 metadataVersion:(long long)arg7 ;
-(NSString *)audioEncoderPresetName;
-(id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 recalled:(BOOL)arg7 audioEncoderPresetName:(id)arg8 metadataVersion:(long long)arg9 songFormat:(id)arg10 sampleRate:(long long)arg11 customOptions:(id)arg12 ;
-(void)updateSampleRate:(long long)arg1 ;
-(BOOL)verifyRendition:(id)arg1 forDuration:(SCD_Struct_PM8)arg2 failureReason:(id*)arg3 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2 ;
-(id)_loadArtworkImage;
-(BOOL)_verifyClips:(id)arg1 inRendition:(id)arg2 failureReason:(id*)arg3 ;
-(BOOL)_verifyKeyFrames:(id)arg1 failureReason:(id*)arg2 ;
-(NSDictionary *)customOptions;
-(void)setAudioEncoderPresetName:(NSString *)arg1 ;
-(void)setSongFormat:(NSString *)arg1 ;
-(void)setRecalled:(BOOL)arg1 ;
-(void)setCustomOptions:(NSDictionary *)arg1 ;
@end
