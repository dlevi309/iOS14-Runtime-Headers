/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSData;

@interface DEAsset : NSObject {

	NSData* _version;
	NSData* _encryptedVersion;
	unsigned long long _downloadType;
	unsigned long long _encryptedSize;

}

@property (nonatomic,retain) NSData * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * encryptedVersion;                     //@synthesize encryptedVersion=_encryptedVersion - In the implementation block
@property (assign,nonatomic) unsigned long long downloadType;               //@synthesize downloadType=_downloadType - In the implementation block
@property (assign,nonatomic) unsigned long long encryptedSize;              //@synthesize encryptedSize=_encryptedSize - In the implementation block
+(void)assetToPb:(id)arg1 asset:(id)arg2 assetPb:(Asset*)arg3 ;
+(unsigned long long)downloadTypeFromPb:(int)arg1 ;
+(int)downloadTypeToPb:(unsigned long long)arg1 ;
+(id)assetFromPb:(const Asset*)arg1 ;
-(void)setEncryptedVersion:(NSData *)arg1 ;
-(void)setDownloadType:(unsigned long long)arg1 ;
-(void)setEncryptedSize:(unsigned long long)arg1 ;
-(unsigned long long)downloadType;
-(NSData *)encryptedVersion;
-(unsigned long long)encryptedSize;
-(void)setVersion:(NSData *)arg1 ;
-(NSData *)version;
@end

