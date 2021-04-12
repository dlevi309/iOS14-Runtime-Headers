/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@class NSString;

@interface GEOIdentifiedMapDataRequester : GEOSimpleTileRequester <NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(id)_urlComponentsForKey:(const GEOTileKey*)arg1 withURLString:(id)arg2 language:(id)arg3 ;
@end
