/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface TSUZipArchive : NSObject {

	unsigned long long _options;
	NSMutableDictionary* _entriesMap;
	NSMutableOrderedSet* _entries;
	long long _endOfLastEntry;

}

@property (nonatomic,readonly) unsigned long long archiveLength; 
@property (nonatomic,readonly) long long endOfLastEntry;                      //@synthesize endOfLastEntry=_endOfLastEntry - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) unsigned long long entriesCount; 
@property (nonatomic,readonly) BOOL hasNonEmptyEntries; 
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)addEntry:(id)arg1 ;
-(BOOL)isValid;
-(unsigned long long)entriesCount;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(unsigned long long)archiveLength;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newArchiveReadChannel;
-(long long)endOfLastEntry;
-(id)streamReadChannelForEntry:(id)arg1 ;
-(void)collapseCommonRootDirectory;
-(void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned)arg4 seekForward:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)readFilenameFromBuffer:(const void*)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readExtraFieldsFromBuffer:(const void*)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readFileCommentFromBuffer:(const void*)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4 ;
-(void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3 ;
-(id)normalizeEntryName:(id)arg1 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(BOOL)hasNonEmptyEntries;
-(id)readChannelForEntry:(id)arg1 ;
-(id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end
