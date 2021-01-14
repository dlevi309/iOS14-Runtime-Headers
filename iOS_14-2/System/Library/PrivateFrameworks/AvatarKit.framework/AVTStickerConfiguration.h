/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/AVTCacheableResourceScope.h>

@class NSString, AVTAvatarPhysicalizedPose, NSArray, AVTStickerCamera, NSDictionary, AVTAvatarPoseAnimation;

@interface AVTStickerConfiguration : NSObject <AVTCacheableResourceScope> {

	BOOL _preRendered;
	BOOL _hasLoadedFromConfiguration;
	float _rate;
	NSString* _name;
	NSString* _localizedName;
	AVTAvatarPhysicalizedPose* _physicalizedPose;
	NSArray* _props;
	NSArray* _shaderModifiers;
	AVTStickerCamera* _camera;
	NSString* _stickerPack;
	double _snapshotFrame;
	double _duration;
	NSArray* _morpherOverrides;
	NSArray* _presetOverrides;
	NSArray* _poseAdjustments;
	unsigned long long _stickerVersion;
	NSDictionary* _configurationDictionary;
	NSString* _assetsPath;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * configurationDictionary;                    //@synthesize configurationDictionary=_configurationDictionary - In the implementation block
@property (nonatomic,retain) NSString * assetsPath;                                     //@synthesize assetsPath=_assetsPath - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFromConfiguration;                           //@synthesize hasLoadedFromConfiguration=_hasLoadedFromConfiguration - In the implementation block
@property (nonatomic,retain) AVTAvatarPhysicalizedPose * physicalizedPose;              //@synthesize physicalizedPose=_physicalizedPose - In the implementation block
@property (nonatomic,retain) NSArray * poseAdjustments;                                 //@synthesize poseAdjustments=_poseAdjustments - In the implementation block
@property (nonatomic,retain) NSArray * props;                                           //@synthesize props=_props - In the implementation block
@property (nonatomic,retain) NSArray * shaderModifiers;                                 //@synthesize shaderModifiers=_shaderModifiers - In the implementation block
@property (nonatomic,retain) AVTStickerCamera * camera;                                 //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * emojiRepresentation; 
@property (nonatomic,readonly) AVTAvatarPoseAnimation * poseAnimation; 
@property (nonatomic,readonly) BOOL preRendered;                                        //@synthesize preRendered=_preRendered - In the implementation block
@property (nonatomic,readonly) NSString * stickerPack;                                  //@synthesize stickerPack=_stickerPack - In the implementation block
@property (nonatomic,readonly) double snapshotFrame;                                    //@synthesize snapshotFrame=_snapshotFrame - In the implementation block
@property (nonatomic,readonly) double duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize size;                                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float rate;                                              //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) NSArray * morpherOverrides;                              //@synthesize morpherOverrides=_morpherOverrides - In the implementation block
@property (nonatomic,readonly) NSArray * presetOverrides;                               //@synthesize presetOverrides=_presetOverrides - In the implementation block
@property (nonatomic,readonly) unsigned long long stickerVersion;                       //@synthesize stickerVersion=_stickerVersion - In the implementation block
+(id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2 ;
+(id)stickerConfigurationsForMemojiInStickerPack:(id)arg1 ;
+(id)availableStickerNamesForMemojiInStickerPack:(id)arg1 ;
+(id)availableStickerNamesForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2 ;
+(id)unavailableAnimojiNamesForStickerPack:(id)arg1 ;
+(id)stickerConfigurationsForAnimojiNamed:(id)arg1 ;
+(id)allStickerPackNames;
+(id)stickerConfigurationsForMemoji;
+(id)stickerConfigurationsForPuppetNamed:(id)arg1 ;
-(id)cacheableResourceAssociatedIdentifier;
-(unsigned long long)cacheableResourceAssociatedCost;
-(AVTStickerCamera *)camera;
-(void)unload;
-(NSString *)localizedName;
-(NSArray *)props;
-(void)loadIfNeeded;
-(NSDictionary *)configurationDictionary;
-(CGSize)size;
-(NSString *)name;
-(NSString *)description;
-(float)rate;
-(void)setConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setCamera:(AVTStickerCamera *)arg1 ;
-(double)snapshotFrame;
-(NSArray *)presetOverrides;
-(id)initWithName:(id)arg1 pose:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6 ;
-(AVTAvatarPhysicalizedPose *)physicalizedPose;
-(double)duration;
-(NSString *)stickerPack;
-(BOOL)preRendered;
-(AVTAvatarPoseAnimation *)poseAnimation;
-(NSArray *)shaderModifiers;
-(id)initWithName:(id)arg1 poseAnimation:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6 ;
-(void)setShaderModifiers:(NSArray *)arg1 ;
-(NSArray *)poseAdjustments;
-(NSArray *)morpherOverrides;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(id)initWithConfigurationAtPath:(id)arg1 forStickerPack:(id)arg2 ;
-(id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2 forStickerPack:(id)arg3 ;
-(void)setupOptions:(id)arg1 ;
-(BOOL)hasLoadedFromConfiguration;
-(NSString *)assetsPath;
-(void)setPhysicalizedPose:(AVTAvatarPhysicalizedPose *)arg1 ;
-(void)setPoseAdjustments:(NSArray *)arg1 ;
-(void)setProps:(NSArray *)arg1 ;
-(void)setHasLoadedFromConfiguration:(BOOL)arg1 ;
-(void)_updateDictionary:(id)arg1 withTargetPath:(id)arg2 ;
-(id)initWithConfigurationAtPath:(id)arg1 ;
-(NSString *)emojiRepresentation;
-(unsigned long long)stickerVersion;
-(void)setAssetsPath:(NSString *)arg1 ;
@end
