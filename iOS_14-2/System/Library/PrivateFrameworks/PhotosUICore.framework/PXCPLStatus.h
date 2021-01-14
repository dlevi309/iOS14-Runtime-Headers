/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface PXCPLStatus : NSObject <NSCopying> {

	BOOL _isEnabled;
	BOOL _isSyncing;
	BOOL _isUserPaused;
	BOOL _isInLowDataMode;
	BOOL _isInLowPowerMode;
	BOOL _isExceedingBatteryQuota;
	BOOL _isExceedingCellularQuota;
	BOOL _isExceedingQuota;
	BOOL _isCellularDataDisabled;
	BOOL _isInAirplaneMode;
	BOOL _isClientVersionTooOld;
	BOOL _isOffline;
	BOOL _isInSoftResetSync;
	BOOL _isInHardResetSync;
	BOOL _hasCloudQuotaOffer;
	BOOL _cloudQuotaOfferHasAssetCounts;
	NSDate* _syncDate;
	NSDate* _exitDate;
	unsigned long long _numberOfItemsToUpload;
	unsigned long long _numberOfItemsToAdd;
	unsigned long long _numberOfOriginalsToDownload;
	unsigned long long _numberOfItemsFailingToUpload;
	unsigned long long _numberOfPhotoAssets;
	unsigned long long _numberOfVideoAssets;
	unsigned long long _numberOfOtherAssets;
	unsigned long long _numberOfReferencedItems;
	long long _itemsToUploadProgressPercentage;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
@property (assign,nonatomic) long long itemsToUploadProgressPercentage;                    //@synthesize itemsToUploadProgressPercentage=_itemsToUploadProgressPercentage - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isSyncing;                                               //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,copy) NSDate * syncDate;                                              //@synthesize syncDate=_syncDate - In the implementation block
@property (nonatomic,copy) NSDate * exitDate;                                              //@synthesize exitDate=_exitDate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsToUpload;                     //@synthesize numberOfItemsToUpload=_numberOfItemsToUpload - In the implementation block
@property (assign,nonatomic) float itemsToUploadProgress; 
@property (assign,nonatomic) unsigned long long numberOfItemsToAdd;                        //@synthesize numberOfItemsToAdd=_numberOfItemsToAdd - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOriginalsToDownload;               //@synthesize numberOfOriginalsToDownload=_numberOfOriginalsToDownload - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsFailingToUpload;              //@synthesize numberOfItemsFailingToUpload=_numberOfItemsFailingToUpload - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotoAssets;                       //@synthesize numberOfPhotoAssets=_numberOfPhotoAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfVideoAssets;                       //@synthesize numberOfVideoAssets=_numberOfVideoAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOtherAssets;                       //@synthesize numberOfOtherAssets=_numberOfOtherAssets - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReferencedItems;                   //@synthesize numberOfReferencedItems=_numberOfReferencedItems - In the implementation block
@property (assign,nonatomic) BOOL isUserPaused;                                            //@synthesize isUserPaused=_isUserPaused - In the implementation block
@property (assign,nonatomic) BOOL isInLowDataMode;                                         //@synthesize isInLowDataMode=_isInLowDataMode - In the implementation block
@property (assign,nonatomic) BOOL isInLowPowerMode;                                        //@synthesize isInLowPowerMode=_isInLowPowerMode - In the implementation block
@property (assign,nonatomic) BOOL isExceedingBatteryQuota;                                 //@synthesize isExceedingBatteryQuota=_isExceedingBatteryQuota - In the implementation block
@property (assign,nonatomic) BOOL isExceedingCellularQuota;                                //@synthesize isExceedingCellularQuota=_isExceedingCellularQuota - In the implementation block
@property (assign,nonatomic) BOOL isExceedingQuota;                                        //@synthesize isExceedingQuota=_isExceedingQuota - In the implementation block
@property (assign,nonatomic) BOOL isCellularDataDisabled;                                  //@synthesize isCellularDataDisabled=_isCellularDataDisabled - In the implementation block
@property (assign,nonatomic) BOOL isInAirplaneMode;                                        //@synthesize isInAirplaneMode=_isInAirplaneMode - In the implementation block
@property (assign,nonatomic) BOOL isClientVersionTooOld;                                   //@synthesize isClientVersionTooOld=_isClientVersionTooOld - In the implementation block
@property (assign,nonatomic) BOOL isOffline;                                               //@synthesize isOffline=_isOffline - In the implementation block
@property (assign,nonatomic) BOOL isInSoftResetSync;                                       //@synthesize isInSoftResetSync=_isInSoftResetSync - In the implementation block
@property (assign,nonatomic) BOOL isInHardResetSync;                                       //@synthesize isInHardResetSync=_isInHardResetSync - In the implementation block
@property (assign,nonatomic) BOOL hasCloudQuotaOffer;                                      //@synthesize hasCloudQuotaOffer=_hasCloudQuotaOffer - In the implementation block
@property (assign,nonatomic) BOOL cloudQuotaOfferHasAssetCounts;                           //@synthesize cloudQuotaOfferHasAssetCounts=_cloudQuotaOfferHasAssetCounts - In the implementation block
+(id)statusWithStringRepresentation:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)stringRepresentation;
-(BOOL)isInAirplaneMode;
-(id)init;
-(BOOL)isOffline;
-(BOOL)isExceedingQuota;
-(NSDate *)exitDate;
-(id)_dictionaryRepresentation;
-(NSDate *)syncDate;
-(unsigned long long)numberOfItemsToAdd;
-(id)description;
-(BOOL)isSyncing;
-(id)_initWithDictionaryRepresentation:(id)arg1 ;
-(void)setIsOffline:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSyncDate:(NSDate *)arg1 ;
-(BOOL)_isEqualToCPLStatus:(id)arg1 ;
-(void)setItemsToUploadProgress:(float)arg1 ;
-(BOOL)isUserPaused;
-(float)itemsToUploadProgress;
-(unsigned long long)numberOfItemsToUpload;
-(void)setNumberOfItemsToUpload:(unsigned long long)arg1 ;
-(void)setNumberOfItemsToAdd:(unsigned long long)arg1 ;
-(unsigned long long)numberOfOriginalsToDownload;
-(void)setNumberOfOriginalsToDownload:(unsigned long long)arg1 ;
-(void)setNumberOfItemsFailingToUpload:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPhotoAssets;
-(void)setNumberOfPhotoAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVideoAssets;
-(void)setNumberOfVideoAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfOtherAssets;
-(void)setNumberOfOtherAssets:(unsigned long long)arg1 ;
-(unsigned long long)numberOfReferencedItems;
-(void)setNumberOfReferencedItems:(unsigned long long)arg1 ;
-(void)setIsUserPaused:(BOOL)arg1 ;
-(BOOL)isInLowDataMode;
-(void)setIsInLowDataMode:(BOOL)arg1 ;
-(BOOL)isInLowPowerMode;
-(void)setIsInLowPowerMode:(BOOL)arg1 ;
-(BOOL)isExceedingBatteryQuota;
-(void)setIsExceedingBatteryQuota:(BOOL)arg1 ;
-(BOOL)isExceedingCellularQuota;
-(void)setIsExceedingCellularQuota:(BOOL)arg1 ;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(BOOL)isCellularDataDisabled;
-(void)setIsCellularDataDisabled:(BOOL)arg1 ;
-(void)setIsInAirplaneMode:(BOOL)arg1 ;
-(BOOL)isClientVersionTooOld;
-(void)setIsClientVersionTooOld:(BOOL)arg1 ;
-(BOOL)isInSoftResetSync;
-(void)setIsInSoftResetSync:(BOOL)arg1 ;
-(BOOL)isInHardResetSync;
-(void)setIsInHardResetSync:(BOOL)arg1 ;
-(BOOL)hasCloudQuotaOffer;
-(void)setHasCloudQuotaOffer:(BOOL)arg1 ;
-(BOOL)cloudQuotaOfferHasAssetCounts;
-(void)setCloudQuotaOfferHasAssetCounts:(BOOL)arg1 ;
-(long long)itemsToUploadProgressPercentage;
-(void)setItemsToUploadProgressPercentage:(long long)arg1 ;
-(void)setIsSyncing:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(unsigned long long)numberOfItemsFailingToUpload;
-(BOOL)isEqual:(id)arg1 ;
@end
