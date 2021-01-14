/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNActionable.h>
#import <libobjc.A.dylib/SCNBoundingVolume.h>
#import <UIKit/UIFocusItem.h>

@class NSArray, NSMutableArray, SCNNodeComponent, SCNOrderedDictionary, NSMutableDictionary, NSString, SCNLight, SCNCamera, SCNGeometry, SCNSkinner, SCNMorpher, SCNPhysicsBody, SCNPhysicsField, UIView;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume, UIFocusItem> {

	_C3DNode* _node;
	SCNNode* _parent;
	NSMutableArray* _childNodes;
	SCNNode* _presentationInstance;
	unsigned _isPresentationInstance : 1;
	unsigned _lightLoaded : 1;
	unsigned _geometryLoaded : 1;
	unsigned _cameraLoaded : 1;
	unsigned _skinnerLoaded : 1;
	unsigned _morpherLoaded : 1;
	unsigned _paused : 1;
	unsigned _pausedByInheritance : 1;
	unsigned _affineUpToDate : 1;
	unsigned _transformUpToDate : 1;
	unsigned _hasPivot : 1;
	unsigned _isJoint : 1;
	unsigned _rotationRepresentation : 2;
	unsigned _movability : 1;
	unsigned _hidden : 1;
	unsigned _castsShadow : 1;
	unsigned _ignoreAnimationWhenCopying_tmp : 1;
	unsigned _focusBehavior : 2;
	unsigned _isFocusableOrHasFocusableChild : 1;
	unsigned _authoringEnvironmentNode : 1;
	unsigned _hasComponentBitmask : 11;
	SCD_Struct_SC13 _transform;
	 _position;
	SCD_Union_SC100 _rotation;
	 _scale;
	float _opacity;
	unsigned long long _categoryBitMask;
	long long _renderingOrder;
	SCNNodeComponent* _components;
	SCNOrderedDictionary* _actions;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	SCNVector3* _fixedBoundingBoxExtrema;
	NSString* _name;
	NSMutableDictionary* _valueForKey;
	id _rendererDelegate;

}

@property (nonatomic,readonly) SCNVector3 worldUp; 
@property (nonatomic,readonly) SCNVector3 worldRight; 
@property (nonatomic,readonly) SCNVector3 worldFront; 
@property (assign,nonatomic) SCD_Struct_SC13 simdTransform; 
@property (assign,nonatomic)  simdPosition; 
@property (assign,nonatomic)  simdRotation; 
@property (assign,nonatomic) SCD_Struct_SC15 simdOrientation; 
@property (assign,nonatomic)  simdEulerAngles; 
@property (assign,nonatomic)  simdScale; 
@property (assign,nonatomic) SCD_Struct_SC13 simdPivot; 
@property (assign,nonatomic)  simdWorldPosition; 
@property (assign,nonatomic) SCD_Struct_SC15 simdWorldOrientation; 
@property (assign,nonatomic) SCD_Struct_SC13 simdWorldTransform; 
@property (nonatomic,readonly)  simdWorldUp; 
@property (nonatomic,readonly)  simdWorldRight; 
@property (nonatomic,readonly)  simdWorldFront; 
@property (assign,nonatomic) long long authoringCameraType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SCNLight * light; 
@property (nonatomic,retain) SCNCamera * camera; 
@property (nonatomic,retain) SCNGeometry * geometry; 
@property (nonatomic,retain) SCNSkinner * skinner; 
@property (nonatomic,retain) SCNMorpher * morpher; 
@property (assign,nonatomic) SCNMatrix4 transform; 
@property (nonatomic,readonly) SCNMatrix4 worldTransform; 
@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 worldPosition; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) SCNVector4 orientation; 
@property (assign,nonatomic) SCNVector4 worldOrientation; 
@property (assign,nonatomic) SCNVector3 eulerAngles; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) SCNMatrix4 pivot; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) long long renderingOrder; 
@property (assign,nonatomic) BOOL castsShadow; 
@property (assign,nonatomic) long long movabilityHint; 
@property (nonatomic,readonly) SCNNode * parentNode; 
@property (nonatomic,readonly) NSArray * childNodes; 
@property (nonatomic,retain) SCNPhysicsBody * physicsBody; 
@property (nonatomic,retain) SCNPhysicsField * physicsField; 
@property (copy) NSArray * constraints; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,readonly) SCNNode * presentationNode; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) id<SCNNodeRendererDelegate> rendererDelegate; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) long long focusBehavior; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)node;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(SCNVector3)localUp;
+(id)nodeWithGeometry:(id)arg1 ;
+(id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2 sceneNodes:(id)arg3 skinnedMeshes:(id)arg4 skelNodesMap:(SkelNodesMap*)arg5 asset:(id)arg6 options:(id)arg7 ;
+(id)nodeWithMDLObject:(id)arg1 ;
+(id)nodeWithMDLAsset:(id)arg1 ;
+(1)simdLocalFront;
+(1)simdLocalUp;
+(1)simdLocalRight;
+(id)nodeWithNodeRef:(_C3DNode*)arg1 ;
+(id)_dumpNodeTree:(id)arg1 tab:(id)arg2 ;
+(id)keyPathsForValuesAffectingPosition;
+(id)keyPathsForValuesAffectingTransform;
+(id)keyPathsForValuesAffectingRotation;
+(id)keyPathsForValuesAffectingEulerAngles;
+(id)keyPathsForValuesAffectingOrientation;
+(id)keyPathsForValuesAffectingScale;
+(SCNVector3)localRight;
+(SCNVector3)localFront;
-(void)avt_enableSubdivisionOnHierarchyWithQuality:(unsigned long long)arg1 animoji:(BOOL)arg2 ;
-(id)clone;
-(void)removeAllAnimations;
-(id)debugQuickLookObject;
-(BOOL)canBecomeFocused;
-(SCNGeometry *)geometry;
-(void)_setPosition:;
-(SCNCamera *)camera;
-(NSArray *)constraints;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)scene;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(void)setEntity:(id)arg1 ;
-(SCNVector3)position;
-(void)dump;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)entity;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)hidden;
-(NSArray *)preferredFocusEnvironments;
-(BOOL)isHidden;
-(void)setRotation:(SCNVector4)arg1 ;
-(void)setNeedsFocusUpdate;
-(id)init;
-(id)actions;
-(SCNVector4)rotation;
-(void)setHidden:(BOOL)arg1 ;
-(void)setQuaternion:(SCNVector4)arg1 ;
-(SCNLight *)light;
-(NSArray *)filters;
-(BOOL)hasActions;
-(SCNMatrix4)pivot;
-(SCNVector3)scale;
-(double)opacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(SCNVector3)eulerAngles;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setOpacity:(double)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(unsigned long long)categoryBitMask;
-(NSString *)name;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)_registerAsObserver;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)_dump:(id)arg1 ;
-(1)_euler;
-(BOOL)isGizmo;
-(void)_setScale:;
-(NSString *)description;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(BOOL)_isEligibleForFocusInteraction;
-(id)copy;
-(SCNVector4)quaternion;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(SCNNode *)parentNode;
-(void)renderInContext:(void*)arg1 ;
-(void)setCamera:(SCNCamera *)arg1 ;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(void)setScale:(SCNVector3)arg1 ;
-(void)setGeometry:(SCNGeometry *)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNVector4)orientation;
-(id)initWithCoder:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)updateFocusIfNeeded;
-(NSArray *)animationKeys;
-(void)setName:(NSString *)arg1 ;
-(SCNMorpher *)morpher;
-(void)lookAt:(SCNVector3)arg1 ;
-(SCNSkinner *)skinner;
-(void)setIdentifier:(id)arg1 ;
-(id)identifier;
-(_C3DNode*)nodeRef;
-(SCNVector3)worldUp;
-(id)__light;
-(BOOL)isJoint;
-(NSArray *)childNodes;
-(void)removeAllActions;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addChildNode:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)indexOfChildNode:(id)arg1 ;
-(void)_updateTransform;
-(void)removeFromParentNode;
-(void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isPaused;
-(void)_setParent:(id)arg1 ;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)__geometry;
-(void)setOrientation:(SCNVector4)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setLight:(SCNLight *)arg1 ;
-(void)setPhysicsBody:(SCNPhysicsBody *)arg1 ;
-(SCNPhysicsBody *)physicsBody;
-(SCD_Struct_SC15)_quaternion;
-(void)runAction:(id)arg1 ;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)enumerateHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)setMorpher:(SCNMorpher *)arg1 ;
-(SCNNode *)presentationNode;
-(4)simdConvertPosition:(id)arg1 ;
-(4)simdConvertVector:(id)arg1 ;
-(4)simdConvertVector:(id)arg1 ;
-(id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2 ;
-(SCD_Struct_SC13)simdWorldTransform;
-(SCD_Struct_SC13)simdConvertTransform:(SCD_Struct_SC13)arg1 fromNode:(id)arg2 ;
-(4)simdConvertPosition:(id)arg1 ;
-(void)setSimdPosition:;
-(id)childNodesPassingTest:(/*^block*/id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)setSkinner:(SCNSkinner *)arg1 ;
-(void)setRenderingOrder:(long long)arg1 ;
-()simdPosition;
-(SCNMatrix4)convertTransform:(SCNMatrix4)arg1 toNode:(id)arg2 ;
-(void)setSimdEulerAngles:;
-(void)setSimdScale:;
-(void)setCastsShadow:(BOOL)arg1 ;
-()simdWorldPosition;
-()simdEulerAngles;
-()simdScale;
-(void)setSimdPivot:(SCD_Struct_SC13)arg1 ;
-(void)setPivot:(SCNMatrix4)arg1 ;
-(void)removeAllBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)setSimdOrientation:(SCD_Struct_SC15)arg1 ;
-(SCD_Struct_SC15)simdOrientation;
-(void)removeActionForKey:(id)arg1 ;
-(void)runAction:(id)arg1 forKey:(id)arg2 ;
-(long long)movabilityHint;
-(void)setMovabilityHint:(long long)arg1 ;
-(SCD_Struct_SC13)simdTransform;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setSimdTransform:(SCD_Struct_SC13)arg1 ;
-(void)_addSkinnerWithMDLMesh:(id)arg1 sceneNodes:(id)arg2 ;
-(id)_associatedMDLObject;
-(void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(BOOL)arg3 bakeAO:(BOOL)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(/*^block*/id)arg7 terminateSetter:(/*^block*/id)arg8 ;
-(const void*)__CFObject;
-(void)setEulerAngles:(SCNVector3)arg1 ;
-(void)setSimdWorldTransform:(SCD_Struct_SC13)arg1 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 toNode:(id)arg2 ;
-(C3DSceneRef)sceneRef;
-(id)flattenedCopy;
-(void)setAuthoringEnvironmentNode:(BOOL)arg1 ;
-(void)setHittable:(BOOL)arg1 ;
-(void)addAudioPlayer:(id)arg1 ;
-(id)audioPlayers;
-(void)removeAudioPlayer:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)unbindAnimatablePath:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(id)particleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(void)addParticleSystem:(id)arg1 ;
-(BOOL)_isAReference;
-(void)simdLocalTranslateBy:;
-(void)simdLocalRotateBy:(SCD_Struct_SC15)arg1 ;
-(SCD_Struct_SC15)simdWorldOrientation;
-()simdWorldFront;
-(void)setSimdWorldOrientation:(SCD_Struct_SC15)arg1 ;
-()simdWorldRight;
-()simdWorldUp;
-(void)simdRotateBy:(SCD_Struct_SC15)arg1 ;
-(void)_removeAction:(id)arg1 forKey:(id)arg2 ;
-(long long)rotationRepresentation;
-(void)setGizmo:(BOOL)arg1 ;
-(BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 ;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(BOOL)castsShadow;
-(id)initPresentationNodeWithNodeRef:(_C3DNode*)arg1 ;
-(SCNPhysicsField *)physicsField;
-(long long)renderingOrder;
-(id<SCNNodeRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<SCNNodeRendererDelegate>)arg1 ;
-(void)setPhysicsField:(SCNPhysicsField *)arg1 ;
-(BOOL)authoringEnvironmentNode;
-(long long)focusBehavior;
-(void)setFocusBehavior:(long long)arg1 ;
-(id)authoringEnvironmentCompanionNode;
-(void)setAuthoringEnvironmentCompanionNode:(id)arg1 ;
-(NSArray *)actionKeys;
-(id)_copyRecursively;
-(id)initWithNodeRef:(_C3DNode*)arg1 ;
-(BOOL)_childNodesPassingTest:(/*^block*/id)arg1 recursively:(BOOL)arg2 output:(id)arg3 ;
-(id)childNodesPassingTest:(/*^block*/id)arg1 recursively:(BOOL)arg2 ;
-(BOOL)_enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3 ;
-(id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2 ;
-(id)_findComponentWithType:(long long)arg1 ;
-(void)_setComponent:(id)arg1 withType:(long long)arg2 ;
-(void)_updateAffine;
-()simdRotation;
-(void)setSimdRotation:;
-(void)setSimdWorldPosition:;
-(SCD_Struct_SC13)simdPivot;
-(void)_removeComponentWithType:(long long)arg1 ;
-(void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2 ;
-(id)__skinner;
-(id)__morpher;
-(id)__camera;
-(void)_reSyncModelTree;
-(unsigned long long)countOfChildNodes;
-(void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(BOOL)canAddChildNode:(id)arg1 ;
-(void)_setHasFocusableChild;
-(void)_setPausedOrPausedByInheritance:(BOOL)arg1 ;
-(void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)_updateFocusableCache;
-(void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)simdGetBoundingSphereCenter:(1*)arg1 radius:(float*)arg2 ;
-(BOOL)isPresentationInstance;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(id)flattenedClone;
-(void)_focusableCandidates:(id)arg1 ;
-(BOOL)_isEffectivelyHidden;
-(BOOL)isFocusInteractionEnabled;
-(BOOL)_isEligibleForFocus;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeDeadParticleSystem:(C3DParticleSystemRef)arg1 ;
-(id)_particleSystems;
-(id)_audioPlayers;
-(SCD_Struct_SC13)simdConvertTransform:(SCD_Struct_SC13)arg1 toNode:(id)arg2 ;
-(void)_customEncodingOfSCNNode:(id)arg1 usePresentationInstance:(BOOL)arg2 ;
-(void)_encodeNodePropertiesWithCoder:(id)arg1 ;
-(void)_customDecodingOfSCNNode:(id)arg1 ;
-(void)_didDecodeSCNNode:(id)arg1 ;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_initChildNodesArray;
-(id)_dumpTree;
-(id)objectInChildNodesWithName:(id)arg1 ;
-(id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2 ;
-(id)childNodeWithName:(id)arg1 ;
-(id)jsChildNodesWithAttribute:(id)arg1 ;
-(SCNVector4)worldOrientation;
-(void)setWorldOrientation:(SCNVector4)arg1 ;
-(void)_setQuaternion:(SCD_Struct_SC15)arg1 ;
-(void)setWorldPosition:(SCNVector3)arg1 ;
-(SCNVector3)worldPosition;
-(BOOL)isHittable;
-(id)mutableChildNodes;
-(void)setIsJoint:(BOOL)arg1 ;
-(id)objectInChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)removeAllChilds;
-(void)replaceChildNode:(id)arg1 with:(id)arg2 ;
-(BOOL)getFrustum:(SCD_Struct_SC101*)arg1 ;
-(id)getBoundingSphere;
-(id)getBoundingBox;
-(id)_subdividedCopyWithSubdivisionLevel:(long long)arg1 ;
-(void)removeAllParticleSystems;
-(unsigned long long)countOfParticleSystems;
-(id)objectInParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inParticleSystemsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInParticleSystemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAllAudioPlayers;
-(unsigned long long)countOfAudioPlayers;
-(id)objectInAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inAudioPlayersAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInAudioPlayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(SCNVector3)convertVector:(SCNVector3)arg1 toNode:(id)arg2 ;
-(SCNVector3)convertVector:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(SCNMatrix4)convertTransform:(SCNMatrix4)arg1 fromNode:(id)arg2 ;
-(id)authoringEnvironmentPresentationNode;
-(void)setAuthoringEnvironmentPresentationNode:(id)arg1 ;
-(void)simdLookAt:;
-(void)simdLookAt:up:localFront:;
-(SCNVector3)worldRight;
-(SCNVector3)worldFront;
-(void)lookAt:(SCNVector3)arg1 up:(SCNVector3)arg2 localFront:(SCNVector3)arg3 ;
-(void)localTranslateBy:(SCNVector3)arg1 ;
-(void)localRotateBy:(SCNVector4)arg1 ;
-(void)rotateBy:(SCNVector4)arg1 aroundTarget:(SCNVector3)arg2 ;
-(void)setAuthoringCameraType:(long long)arg1 ;
-(long long)authoringCameraType;
-(id)debugQuickLookData;
@end
