/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol SFUZipArchiveDataRepresentation;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, OISFUDataRepresentation, NSData, NSString, OISFUCryptoKey;

@interface OISFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	OISFUDataRepresentation*<SFUZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	OISFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(BOOL)isZipArchiveAtPath:(id)arg1 ;
-(void)setCryptoKey:(id)arg1 ;
-(BOOL)isEncrypted;
-(void)dealloc;
-(id)entryWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3 ;
-(void)readEntries;
-(void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3 ;
-(BOOL)decompressAtPath:(id)arg1 wasEmpty:(BOOL*)arg2 ;
-(id)allEntryNames;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)passphraseHint;
-(id)encryptedDocumentUuid;
-(BOOL)decompressAtPath:(id)arg1 ;
-(id)commonRootDirectoryIgnoringCase:(BOOL)arg1 ;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
@end

