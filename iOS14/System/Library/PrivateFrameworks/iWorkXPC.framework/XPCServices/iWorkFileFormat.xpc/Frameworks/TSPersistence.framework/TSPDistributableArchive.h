/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

@interface TSPDistributableArchive : NSObject {

	map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long> > > >* _entries;
	SFUFileDataRepresentation* _archiveFileRep;
	SFUMemoryDataRepresentation* _archiveMemoryRep;
	SFUZipEntry* _archiveZipEntryRep;
	SCD_Struct_TS94 _archivedVersions;

}
+(BOOL)_checkFileHeader:(const char*)arg1 length:(unsigned long long)arg2 dffVersion:(unsigned short*)arg3 archivedVersions:(SCD_Struct_TS94*)arg4 defaultObjectVersion:(unsigned*)arg5 hasDescriptors:(BOOL*)arg6 hasToc:(BOOL*)arg7 otherDataLength:(unsigned*)arg8 closedCleanly:(BOOL*)arg9 ;
+(id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long long)arg2 ;
+(BOOL)readArchivedVersionsFromStream:(id)arg1 versions:(SCD_Struct_TS94*)arg2 error:(id*)arg3 ;
+(BOOL)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned*)arg2 error:(id*)arg3 ;
+(BOOL)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(BOOL*)arg5 context:(id)arg6 error:(id*)arg7 ;
+(void)cancelStreaming;
-(void)dealloc;
-(BOOL)_readEntriesFromToc:(id)arg1 error:(id*)arg2 ;
-(id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)initWithDffData:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_TS94)archivedVersions;
-(id)createStreamForObject:(long long)arg1 length:(long long*)arg2 ;
-(long long)lengthOfObject:(long long)arg1 ;
-(BOOL)containsObjectWithIdentifier:(long long)arg1 ;
@end

