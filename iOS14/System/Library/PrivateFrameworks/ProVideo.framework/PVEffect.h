/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVEffectHitArea.h>
#import <libobjc.A.dylib/PVEffectTransformable.h>
#import <libobjc.A.dylib/PVEffectTimedProperties.h>
#import <libobjc.A.dylib/PVEffectTextual.h>
#import <libobjc.A.dylib/PVEffectTranscript.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSLock, NSMutableArray, PVEffectTimedPropertiesComponent, NSDictionary;

@interface PVEffect : NSObject <PVEffectHitArea, PVEffectTransformable, PVEffectTimedProperties, PVEffectTextual, PVEffectTranscript, NSSecureCoding, NSCopying> {

	NSString* _effectID;
	NSString* _effectType;
	NSString* _displayName;
	SCD_Struct_PV29 _effectRange;
	NSMutableDictionary* _inspectableProperties;
	NSLock* _inspectablePropertiesLock;
	NSMutableDictionary* _effectParameters;
	atomic<unsigned int>* _loadCount;
	NSMutableArray* _components;
	PVEffectTimedPropertiesComponent* _timedPropertiesComponent;
	BOOL _conformToInputAspect;
	BOOL _isPreview;
	BOOL _isRecording;
	BOOL _useLocalLoopTime;
	BOOL _isInInteractiveMode;
	BOOL _shouldDisableFadeOut;
	NSDictionary* _contentProperties;

}

@property (assign,nonatomic) SCD_Struct_PV29 effectRange;                         //@synthesize effectRange=_effectRange - In the implementation block
@property (assign,nonatomic) BOOL conformToInputAspect;                           //@synthesize conformToInputAspect=_conformToInputAspect - In the implementation block
@property (nonatomic,copy) NSDictionary * inspectableProperties; 
@property (nonatomic,retain) NSMutableDictionary * effectParameters;              //@synthesize effectParameters=_effectParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * contentProperties;                    //@synthesize contentProperties=_contentProperties - In the implementation block
@property (assign,nonatomic) BOOL isPreview;                                      //@synthesize isPreview=_isPreview - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                    //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) BOOL useLocalLoopTime;                               //@synthesize useLocalLoopTime=_useLocalLoopTime - In the implementation block
@property (assign,nonatomic) BOOL isInInteractiveMode;                            //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableFadeOut;                           //@synthesize shouldDisableFadeOut=_shouldDisableFadeOut - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)setInteractiveMode:(BOOL)arg1 ;
+(void)initEffectRegistry;
+(id)newEffectWithID:(id)arg1 ;
+(id)registeredEffectIDsForEffectType:(id)arg1 ;
+(BOOL)effectIDIsNone:(id)arg1 ;
+(id)effectTypeForEffectID:(id)arg1 ;
+(id)displayNameForEffectID:(id)arg1 ;
+(id)shadowFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(double)textHeightFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 scale:(double)arg3 ;
+(long long)verticalAlignmentFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(double)xOffsetForTextTrackingFromAttributedString:(id)arg1 ;
+(void)initEffectRegistryWithHostDelegate:(id)arg1 ;
+(void)cleanupEffectsCache;
+(void)noteApplicationDidReceiveMemoryWarning;
+(BOOL)isAllCapsFromAttributes:(id)arg1 ;
+(double)baselineOffsetFromAttributedString:(id)arg1 ;
+(void)modifyAttributedStringByApplyingSubstituteFont:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
+(void)modifyAttributedStringByAdjustingKerning:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 scale:(double)arg4 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 scale:(double)arg4 ;
+(void)modifyAttributedStringByAdjustingFontSize:(id)arg1 scale:(double)arg2 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg1 scale:(double)arg2 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg1 scale:(double)arg2 rotation:(double)arg3 ;
+(void)modifyAttributedStringByAdjustingFont:(id)arg1 toFitSize:(CGSize)arg2 ;
+(BOOL)effectIDIsRegistered:(id)arg1 ;
+(id)propertiesForEffect:(id)arg1 ;
+(id)categoryForEffectID:(id)arg1 ;
+(void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3 ;
+(void)registerEffects;
+(void)handleApplicationWillTerminate;
+(void)willTerminate:(id)arg1 ;
+(void)handleCleanupEffectsCache;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)cleanupEffectsSingletons;
+(BOOL)isInteractiveMode;
+(id)newEffectWithURL:(id)arg1 ;
+(id)newEffectWithData:(id)arg1 ;
+(void)clearPreviewStats;
+(id)attributeForName:(id)arg1 fromAttributedString:(id)arg2 defaultAttributes:(id)arg3 ;
+(double)textHeightFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg1 effectTransform:(id)arg2 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg1 ;
+(void)runDeferredRegistration;
+(void)ensureEffectsRegistered;
+(id)_effectRegistry;
+(id)_effectRegistryForLookup;
+(id)_registryEntryForEffectID:(id)arg1 ;
+(id)allRegisteredEffectIDs;
+(Class)classForEffectID:(id)arg1 ;
+(void)appFinishedLaunching:(id)arg1 ;
+(void)deferEffectRegistrationForClass:(Class)arg1 ;
+(id)userVisibleEffectIDs;
+(id)registeredEffectIDsForEffectTypes:(id)arg1 ;
+(id)firstRegisteredEffectIDContainingSubstring:(id)arg1 ;
+(id)registeredEffectIDsForClass:(Class)arg1 ;
+(id)displayNameForEffectType:(id)arg1 ;
+(id)themeForEffectID:(id)arg1 ;
+(id)descriptionForEffectID:(id)arg1 ;
+(BOOL)isVideoForEffectID:(id)arg1 ;
+(id)defaultVideoTransitionEffectID;
+(id)_registeredEffectClasses;
+(void)_registerBuiltInEffects;
+(void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2 ;
+(void)noteApplicationWillTerminate;
-(id)plistRepresentation;
-(BOOL)isRecording;
-(int)origin;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)effectType;
-(void)setEffectParameters:(NSMutableDictionary *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(id)arg1 ;
-(id)description;
-(BOOL)isReady;
-(int)orientation;
-(id)initWithCoder:(id)arg1 ;
-(id)categoryName;
-(NSMutableDictionary *)effectParameters;
-(void)releaseResources;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(void)dealloc;
-(CGSize)outputSize;
-(void)setTranscriptionText:(id)arg1 ;
-(void)setIsRecording:(BOOL)arg1 ;
-(BOOL)isPreview;
-(id)cameraTransform;
-(NSDictionary *)contentProperties;
-(id)effectID;
-(void)setEffectRange:(SCD_Struct_PV29)arg1 ;
-(void)setInspectableProperties:(NSDictionary *)arg1 ;
-(void)removeAllTimedPropertiesDelegates;
-(void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2 ;
-(SCD_Struct_PV29)effectRange;
-(id)initWithEffectID:(id)arg1 ;
-(float)proxyRenderScale;
-(BOOL)isTextFlipped;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(PVCGPointQuad)cornersAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6 ;
-(BOOL)bounds:(CGRect*)arg1 atTime:(SCD_Struct_PV22)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(id)hitAreaPointsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6 ;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(PVCGPointQuad)textCornersAtTime:(SCD_Struct_PV22)arg1 index:(unsigned long long)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 scale:(CGPoint)arg5 viewSize:(CGSize)arg6 viewOrigin:(int)arg7 ;
-(id)textEditingBoundsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 useParagraphBounds:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(void)beginTextEditing;
-(void)endTextEditing;
-(double)topLevelOpacity;
-(BOOL)resourcesAreReady;
-(BOOL)loadResources;
-(void)updateInspectableProperties:(id)arg1 ;
-(void)setInspectableProperty:(id)arg1 forKey:(id)arg2 ;
-(id)cameraProjection;
-(id)transformAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(void)setUseLocalLoopTime:(BOOL)arg1 ;
-(NSDictionary *)inspectableProperties;
-(void)addEntriesToInspectableProperties:(id)arg1 ;
-(BOOL)loadEffect;
-(void)updateInspectableProperties;
-(void)setConformToInputAspect:(BOOL)arg1 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV22)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV22)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(void)releaseEffect;
-(BOOL)conformToInputAspect;
-(void)assertInspectablePropertiesAreLocked;
-(void)assertInspectablePropertiesAreUnlocked;
-(id)textEditingBounds:(SCD_Struct_PV22)arg1 ;
-(id)textTransformsAtTime:(SCD_Struct_PV22)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(BOOL)hasTimedPropertiesDelegates;
-(BOOL)supportsExtendedRangeInputs;
-(id)effectDescription;
-(BOOL)isTranscription;
-(void)clearTranscription;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg1 ;
-(BOOL)transcriptionHitTest:(CGPoint)arg1 time:(SCD_Struct_PV22)arg2 ;
-(void)updateLiveTitlePickerLoopTime:(BOOL)arg1 ;
-(void)runWithInspectableProperties:(/*^block*/id)arg1 ;
-(id)inspectablePropertyForKey:(id)arg1 ;
-(void)setTopLevelGroupTransform:(id)arg1 ;
-(void)enableCameraOverride:(id)arg1 projection:(id)arg2 ;
-(void)disableCameraOverride;
-(BOOL)isCameraOverrideEnabled;
-(id)initWithContentID:(id)arg1 andDictionary:(id)arg2 ;
-(void)_configureComponents;
-(id)contentPropertyForKey:(id)arg1 ;
-(void)_copyWithZone:(NSZone*)arg1 into:(id)arg2 ;
-(void)_postInit:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 into:(id)arg2 ;
-(id)descriptionOfInspectableProperties;
-(id)contentBundle;
-(BOOL)shouldRenderPreviewAtPosterTime;
-(BOOL)hasBuiltInEnvironment;
-(BOOL)usesDefaultChannelDataEncoding;
-(BOOL)writeDefaultChannels;
-(void)applyInspectableProperties;
-(void)setContentProperties:(NSDictionary *)arg1 ;
-(void)setIsPreview:(BOOL)arg1 ;
-(BOOL)useLocalLoopTime;
-(BOOL)isInInteractiveMode;
-(BOOL)shouldDisableFadeOut;
-(void)setShouldDisableFadeOut:(BOOL)arg1 ;
-(BOOL)applyTimedPropertiesForTime:(SCD_Struct_PV22)arg1 ;
-(void)removeTimedPropertiesDelegate:(id)arg1 ;
-(id)timedPropertiesDelegates;
-(BOOL)hasTimedPropertiesDelegate:(id)arg1 ;
-(id)userContextForTimedPropertiesDelegate:(id)arg1 ;
-(BOOL)hasAllNecessaryResources;
@end
