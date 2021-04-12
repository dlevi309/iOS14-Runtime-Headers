/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSURL, REDataSourceLoader, RERelevanceProviderManagerLoader, RELocationManager, REFeatureSet, NSString;

@interface RERelevanceEngineConfiguration : NSObject <REAutomaticExportedInterface, NSCopying, NSMutableCopying> {

	NSMutableDictionary* _values;
	NSArray* _whitelistedDataSourceClassNames;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> engineQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue; 
@property (nonatomic,copy,readonly) NSURL * modelFileURL; 
@property (nonatomic,copy,readonly) NSURL * baseModelFileURL; 
@property (nonatomic,readonly) unsigned long long modelVersion; 
@property (nonatomic,readonly) BOOL allowsUpdatingModelFile; 
@property (nonatomic,copy,readonly) REDataSourceLoader * dataSourceLoader; 
@property (nonatomic,copy,readonly) RERelevanceProviderManagerLoader * relevanceProviderManagerLoader; 
@property (nonatomic,readonly) unsigned long long trainingBehavior; 
@property (nonatomic,readonly) unsigned long long modelStorageBehavior; 
@property (nonatomic,copy,readonly) NSArray * sectionDescriptors; 
@property (nonatomic,copy,readonly) NSArray * interactionDescriptors; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
@property (nonatomic,copy,readonly) REFeatureSet * primaryFeatures; 
@property (nonatomic,readonly) BOOL wantsImmutableContent; 
@property (nonatomic,readonly) NSString * preferenceDomain; 
@property (nonatomic,readonly) BOOL allowsRemoteTraining; 
@property (nonatomic,readonly) BOOL wantsBackup; 
@property (nonatomic,readonly) BOOL ignoreDeviceLockState; 
@property (nonatomic,readonly) BOOL allowsDiagnosticExtension; 
@property (nonatomic,readonly) id<RERelevanceEngineMetricsRecorder> metricsRecorder; 
@property (nonatomic,readonly) BOOL ignoresInstalledApplications; 
@property (nonatomic,copy,readonly) NSArray * whitelistedDataSourceClassNames;                                      //@synthesize whitelistedDataSourceClassNames=_whitelistedDataSourceClassNames - In the implementation block
+(id)defaultConfiguration;
+(id)sampleUpNextConfiguration;
+(id)_defaultModelFileURL;
+(id)defaultUpNextConfiguration;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(RELocationManager *)locationManager;
-(unsigned long long)modelVersion;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)preferenceDomain;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)sectionDescriptors;
-(NSArray *)interactionDescriptors;
-(BOOL)wantsImmutableContent;
-(NSArray *)whitelistedDataSourceClassNames;
-(unsigned long long)trainingBehavior;
-(BOOL)allowsRemoteTraining;
-(NSURL *)modelFileURL;
-(unsigned long long)modelStorageBehavior;
-(id<RERelevanceEngineMetricsRecorder>)metricsRecorder;
-(NSURL *)baseModelFileURL;
-(REDataSourceLoader *)dataSourceLoader;
-(RERelevanceProviderManagerLoader *)relevanceProviderManagerLoader;
-(NSObject*<OS_dispatch_queue>)engineQueue;
-(BOOL)allowsDiagnosticExtension;
-(REFeatureSet *)primaryFeatures;
-(id)valueForKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3 ;
-(BOOL)allowsUpdatingModelFile;
-(BOOL)wantsBackup;
-(BOOL)ignoreDeviceLockState;
-(BOOL)ignoresInstalledApplications;
-(void)setValue:(id)arg1 forKey:(id)arg2 ofClass:(Class)arg3 ;
@end
