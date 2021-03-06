/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSURL, NSArray, NSDictionary;

@interface AVAudioUnitComponent : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,readonly) NSString * localizedTypeName; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) NSURL * componentURL; 
@property (nonatomic,readonly) NSArray * availableArchitectures; 
@property (getter=isSandboxSafe,nonatomic,readonly) BOOL sandboxSafe; 
@property (nonatomic,readonly) BOOL hasMIDIInput; 
@property (nonatomic,readonly) BOOL hasMIDIOutput; 
@property (nonatomic,readonly) OpaqueAudioComponentRef audioComponent; 
@property (copy) NSArray * userTagNames; 
@property (nonatomic,readonly) NSArray * allTagNames; 
@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) NSURL * iconURL; 
@property (nonatomic,readonly) BOOL passesAUVal; 
@property (nonatomic,readonly) BOOL hasCustomView; 
@property (nonatomic,readonly) NSDictionary * configurationDictionary; 
-(void)localeChanged;
-(NSString *)versionString;
-(NSDictionary *)configurationDictionary;
-(NSString *)manufacturerName;
-(NSString *)name;
-(NSString *)typeName;
-(NSURL *)iconURL;
-(OpaqueAudioComponentRef)audioComponent;
-(NSArray *)userTagNames;
-(NSString *)localizedTypeName;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 ;
-(void)setUserTagNames:(NSArray *)arg1 ;
-(NSArray *)allTagNames;
-(NSURL *)componentURL;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 withAVAUManagerImpl:(AVAudioUnitComponentManagerImpl*)arg2 ;
-(NSArray *)availableArchitectures;
-(BOOL)hasCustomView;
-(BOOL)passesAUVal;
-(BOOL)isSandboxSafe;
-(BOOL)hasMIDIInput;
-(BOOL)hasMIDIOutput;
-(AudioComponentDescription)audioComponentDescription;
-(id)GetTypeName:(unsigned)arg1 ;
-(BOOL)supportsNumberInputChannels:(long long)arg1 outputChannels:(long long)arg2 ;
-(BOOL)isComponentDescriptionMatch:(AudioComponentDescription)arg1 ;
-(unsigned long long)version;
@end

