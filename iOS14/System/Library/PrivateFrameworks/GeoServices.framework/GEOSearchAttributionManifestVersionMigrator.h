/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrator.h>

@class GEOResourceManifestConfiguration, geo_isolater, NSMutableArray, NSString;

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	geo_isolater* _isolater;
	NSMutableArray* _runningTasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2 ;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7 ;
-(void)_removeRunningTask:(id)arg1 ;
-(BOOL)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4 ;
-(void)_addRunningTask:(id)arg1 ;
@end

