/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleFirmwareUpdate.framework/AppleFirmwareUpdate
*/


@protocol OS_os_log;
@class NSObject, NSNumber, NSString, NSArray;

@interface AppleFirmwareUpdateController : NSObject {

	NSObject*<OS_os_log> _log;
	NSNumber* _registryEntryID;
	NSString* _fwAssetDirectory;
	NSString* _fwAssetFile;
	NSString* _fwAssetSignatureType;
	NSNumber* _fwAssetVersion;
	NSNumber* _fwAssetSize;
	NSNumber* _img4Tag;
	NSArray* _fdrClasses;

}

@property (nonatomic,retain) NSString * fwAssetFile;                       //@synthesize fwAssetFile=_fwAssetFile - In the implementation block
@property (nonatomic,retain) NSString * fwAssetSignatureType;              //@synthesize fwAssetSignatureType=_fwAssetSignatureType - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetVersion;                    //@synthesize fwAssetVersion=_fwAssetVersion - In the implementation block
@property (nonatomic,retain) NSNumber * fwAssetSize;                       //@synthesize fwAssetSize=_fwAssetSize - In the implementation block
@property (nonatomic,retain) NSNumber * img4Tag;                           //@synthesize img4Tag=_img4Tag - In the implementation block
@property (nonatomic,retain) NSArray * fdrClasses;                         //@synthesize fdrClasses=_fdrClasses - In the implementation block
@property (nonatomic,retain) NSNumber * registryEntryID;                   //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,retain) NSString * fwAssetDirectory;                  //@synthesize fwAssetDirectory=_fwAssetDirectory - In the implementation block
-(id)init;
-(NSNumber *)img4Tag;
-(NSNumber *)registryEntryID;
-(unsigned)getServiceForRegistryID:(long long*)arg1 ;
-(void)setImg4Tag:(NSNumber *)arg1 ;
-(void)setFdrClasses:(NSArray *)arg1 ;
-(NSArray *)fdrClasses;
-(id)findFWAssetFromTag:(id)arg1 tag:(unsigned)arg2 size:(unsigned long long*)arg3 ;
-(void)setFwAssetFile:(NSString *)arg1 ;
-(NSString *)fwAssetFile;
-(void)setFwAssetSize:(NSNumber *)arg1 ;
-(void)setFwAssetSignatureType:(NSString *)arg1 ;
-(void)setFwAssetVersion:(NSNumber *)arg1 ;
-(NSNumber *)fwAssetVersion;
-(NSNumber *)fwAssetSize;
-(NSString *)fwAssetSignatureType;
-(BOOL)isFWDownloadNeeded:(id)arg1 ;
-(unsigned)getConnectionForRegistryID:(long long*)arg1 ;
-(long long)sendFDRData:(unsigned)arg1 ;
-(BOOL)getEarlyBootList:(id)arg1 ;
-(BOOL)createFWAssetInfo;
-(id)updateFirmwareWithOptions:(id)arg1 ;
-(void)setRegistryEntryID:(NSNumber *)arg1 ;
-(NSString *)fwAssetDirectory;
-(void)setFwAssetDirectory:(NSString *)arg1 ;
@end

