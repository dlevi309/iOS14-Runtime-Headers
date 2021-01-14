/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray, NSMutableArray, NSData;

@interface _UIAppearanceRecorder : NSObject {

	NSString* _classNameToRecord;
	Class _superclassToRecord;
	NSArray* _containerClassNames;
	NSMutableArray* _customizations;
	NSArray* _unarchivedCustomizations;

}

@property (setter=_setClassNameToRecord:,nonatomic,copy) NSString * _classNameToRecord;                 //@synthesize classNameToRecord=_classNameToRecord - In the implementation block
@property (assign,setter=_setSuperclassToRecord:,nonatomic) Class _superclassToRecord;                  //@synthesize superclassToRecord=_superclassToRecord - In the implementation block
@property (setter=_setContainerClassNames:,nonatomic,copy) NSArray * _containerClassNames;              //@synthesize containerClassNames=_containerClassNames - In the implementation block
@property (nonatomic,readonly) NSData * _serializedRepresentation; 
+(id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3 ;
+(id)_sharedAppearanceRecorder;
+(id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2 ;
-(Class)_superclassToRecord;
-(id)init;
-(void)_setSuperclassToRecord:(Class)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(NSData *)_serializedRepresentation;
-(void)_setClassNameToRecord:(id)arg1 ;
-(void)_setContainerClassNames:(id)arg1 ;
-(void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2 ;
-(void)_applyCustomizations;
-(NSString *)_classNameToRecord;
-(NSArray *)_containerClassNames;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 traitCollection:(id)arg4 selectorString:(id)arg5 forRemoteProcess:(BOOL)arg6 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end
