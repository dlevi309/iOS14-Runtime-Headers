/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPFileDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPDirectoryPackage;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	unsigned char _packageIdentifier;
	AB _didCalculateEncodedLength;
	AQ _encodedLength;
	AB _isMissingData;
	BOOL _gilligan_isRemote;
	TSPDirectoryPackage* _package;

}

@property (nonatomic,__weak,readonly) TSPDirectoryPackage * package;              //@synthesize package=_package - In the implementation block
-(id)init;
-(unsigned long long)encodedLength;
-(unsigned long long)length;
-(unsigned char)packageIdentifier;
-(TSPDirectoryPackage *)package;
-(id)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isInPackage:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isMissingData;
-(id)decryptionInfo;
-(BOOL)gilligan_isRemote;
-(BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3 ;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 error:(id*)arg5 ;
-(void)setEncodedLength:(unsigned long long)arg1 isMissingData:(BOOL)arg2 ;
@end
