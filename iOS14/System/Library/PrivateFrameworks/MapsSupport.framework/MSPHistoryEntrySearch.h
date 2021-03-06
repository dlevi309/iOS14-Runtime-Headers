/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString, GEOMapRegion;


@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
@property (nonatomic,copy,readonly) NSString * query; 
@property (nonatomic,copy,readonly) NSString * locationDisplayString; 
@property (nonatomic,copy,readonly) NSString * languageCode; 
@property (nonatomic,copy,readonly) GEOMapRegion * mapRegion; 
@required
-(NSString *)query;
-(GEOMapRegion *)mapRegion;
-(NSString *)languageCode;
-(NSString *)locationDisplayString;

@end

