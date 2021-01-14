/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXNewSearchResult.h>

@class NSString, NSDate;

@interface PXSearchResultCollection : NSObject <PXNewSearchResult> {

	NSString* _collectionUUID;
	unsigned long long _subtype;
	NSString* _thumbnailAssetUUID;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _assetCount;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long assetCount;              //@synthesize assetCount=_assetCount - In the implementation block
@property (nonatomic,copy) NSString * collectionUUID;                    //@synthesize collectionUUID=_collectionUUID - In the implementation block
@property (nonatomic,copy) NSString * thumbnailAssetUUID;                //@synthesize thumbnailAssetUUID=_thumbnailAssetUUID - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long subtype;               //@synthesize subtype=_subtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateIntervalFormatter;
-(unsigned long long)subtype;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(unsigned long long)assetCount;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)thumbnailAssetUUID;
-(void)setThumbnailAssetUUID:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCount:(unsigned long long)arg3 collectionUUID:(id)arg4 thumbnailAssetUUID:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 subtype:(unsigned long long)arg8 ;
-(void)setCollectionUUID:(NSString *)arg1 ;
-(NSString *)description;
-(void)setAssetCount:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(NSString *)collectionUUID;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end
