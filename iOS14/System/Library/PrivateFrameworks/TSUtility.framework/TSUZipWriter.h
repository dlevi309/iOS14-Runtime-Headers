/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue, TSURandomWriteChannel, OS_dispatch_semaphore, OS_dispatch_data;
@class NSObject, NSMutableArray, NSArray, NSMutableDictionary, TSUZipWriterEntry, NSDate, NSError;

@interface TSUZipWriter : NSObject {

	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _channelQueue;
	id<TSURandomWriteChannel> _writeChannel;
	NSObject*<OS_dispatch_semaphore> _writeChannelCompletionSemaphore;
	NSMutableArray* _entries;
	NSArray* _sortedEntries;
	NSMutableDictionary* _entriesMap;
	TSUZipWriterEntry* _currentEntry;
	BOOL _isClosed;
	BOOL _calculateSize;
	BOOL _force32BitSize;
	BOOL _calculateCRC;
	unsigned long long _sizeToMatch;
	unsigned _CRCToMatch;
	NSDate* _lastModificationDateIfSizeAndCRCMatches;
	NSDate* _newEntryLastModificationDate;
	long long _currentOffset;
	NSObject*<OS_dispatch_data> _localFileHeaderData;
	NSMutableArray* _entryDatas;
	unsigned long long _entryDataSize;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _writtenOffset;
	NSError* _error;

}

@property (readonly) unsigned long long archiveLength; 
@property (readonly) unsigned long long entriesCount; 
@property (readonly) NSArray * sortedEntries; 
@property (readonly) BOOL isClosed; 
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isClosed;
-(unsigned long long)entriesCount;
-(void)addData:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 ;
-(unsigned long long)entriesCountImpl;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6 ;
-(void)finishEntry;
-(id)localFileHeaderDataForEntry:(id)arg1 ;
-(void)addData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushEntryData;
-(void)writeData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)p_writeChannel;
-(void)handleWriteError:(id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 fromReadChannel:(id)arg6 writeHandler:(/*^block*/id)arg7 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 fromReadChannel:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)addExistingEntryImpl:(id)arg1 ;
-(void)setEntryInsertionOffsetImpl:(long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeCentralDirectory;
-(void)writeCentralFileHeaderDataForEntry:(id)arg1 ;
-(void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sortedEntriesImpl;
-(void)truncateToNumberOfEntriesImpl:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)truncateToOffsetImpl:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6 ;
-(void)flushCurrentEntryWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addExistingEntry:(id)arg1 ;
-(void)setEntryInsertionOffset:(long long)arg1 ;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)archiveLength;
-(NSArray *)sortedEntries;
-(id)entryWithName:(id)arg1 ;
-(void)truncateToNumberOfEntries:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)truncateToOffset:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

