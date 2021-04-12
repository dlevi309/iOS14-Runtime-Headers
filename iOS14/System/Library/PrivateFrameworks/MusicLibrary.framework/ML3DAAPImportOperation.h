/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class NSError;

@interface ML3DAAPImportOperation : ML3ImportOperation {

	NSError* _importError;
	shared_ptr<DAAPParserDelegate>* _delegate;
	unsigned char _updateType;
	long long _totalTrackCount;
	long long _totalContainerCount;
	long long _processedTrackCount;
	long long _processedContainerCount;
	BOOL _importSessionStarted;
	int _sourceType;

}
-(void)dealloc;
-(BOOL)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(BOOL)arg2 ;
-(BOOL)_startImportSessionIfNeeded;
-(shared_ptr<ML3DAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(shared_ptr<ML3DAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 trackPersonIdentifiers:(vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
-(shared_ptr<ML3DAAPImportItem>*)personImportItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(BOOL)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2 ;
-(void)_finishParsingWithError:(id)arg1 ;
-(BOOL)_processUpdateType:(unsigned char)arg1 ;
-(BOOL)_processTrackItemCount:(int)arg1 ;
-(BOOL)_processTrackElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(BOOL)_processDeletedTrackId:(long long)arg1 ;
-(BOOL)_processContainerItemCount:(int)arg1 ;
-(BOOL)_processContainerElement:(shared_ptr<ML3CPP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 trackPersonIdentifiers:(vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
-(BOOL)_processDeletedContainerId:(long long)arg1 ;
-(BOOL)_processPersonElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
@end
