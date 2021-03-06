/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPLocationClusterID : NSObject <NSCopying> {

	NSString* _name;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;
	NSString* _subLocality;
	NSString* _locality;
	NSString* _administrativeArea;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * subThoroughfare;                 //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,retain) NSString * thoroughfare;                    //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,retain) NSString * subLocality;                     //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,retain) NSString * locality;                        //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;              //@synthesize administrativeArea=_administrativeArea - In the implementation block
+(id)broadenClusterId:(id)arg1 ;
+(BOOL)asClusterIDPlacemark:(id)arg1 isEqualToPlacemark:(id)arg2 ;
+(id)latLongTableWithClusters:(id)arg1 ;
+(void)aggregateRecords:(id)arg1 toClusters:(id)arg2 withLookupTable:(id)arg3 ;
+(id)clustersWithRecords:(id)arg1 ;
+(id)lookupTableWithRecords:(id)arg1 ;
+(id)_broaden:(id)arg1 ;
-(NSString *)subLocality;
-(void)setLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSString *)subThoroughfare;
-(id)initWithPlacemark:(id)arg1 ;
-(NSString *)locality;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)thoroughfare;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 administrativeArea:(id)arg6 ;
@end

