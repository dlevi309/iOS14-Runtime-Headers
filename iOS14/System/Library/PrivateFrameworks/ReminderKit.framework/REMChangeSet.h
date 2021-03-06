/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError;

@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isTruncated;
	BOOL _filterByTransactionAuthorsIsExclusion;
	NSArray* _transactions;
	NSArray* _inserts;
	NSArray* _updates;
	NSArray* _deletes;
	NSError* _error;
	NSArray* _filterByTransactionAuthorStrings;
	NSArray* _filteredTransactions;

}

@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isTruncated;                                        //@synthesize isTruncated=_isTruncated - In the implementation block
@property (nonatomic,retain) NSArray * inserts;                                       //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,retain) NSArray * updates;                                       //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSArray * deletes;                                       //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSArray * filterByTransactionAuthorStrings;              //@synthesize filterByTransactionAuthorStrings=_filterByTransactionAuthorStrings - In the implementation block
@property (assign,nonatomic) BOOL filterByTransactionAuthorsIsExclusion;              //@synthesize filterByTransactionAuthorsIsExclusion=_filterByTransactionAuthorsIsExclusion - In the implementation block
@property (nonatomic,retain) NSArray * filteredTransactions;                          //@synthesize filteredTransactions=_filteredTransactions - In the implementation block
@property (nonatomic,readonly) NSArray * transactions;                                //@synthesize transactions=_transactions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)errorChangeSetWithError:(id)arg1 ;
-(NSArray *)updates;
-(BOOL)isTruncated;
-(id)initWithError:(id)arg1 ;
-(NSArray *)inserts;
-(NSArray *)transactions;
-(BOOL)consolidateAndFilterChangesWithTransactionAuthors:(id)arg1 isExclusion:(BOOL)arg2 ;
-(NSArray *)filteredTransactions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)filterByTransactionAuthorStrings;
-(BOOL)filterByTransactionAuthorsIsExclusion;
-(void)setFilterByTransactionAuthorStrings:(NSArray *)arg1 ;
-(void)setFilterByTransactionAuthorsIsExclusion:(BOOL)arg1 ;
-(BOOL)_filterAndFlattenAndConsolidateChanges;
-(void)setFilteredTransactions:(NSArray *)arg1 ;
-(void)setInserts:(NSArray *)arg1 ;
-(void)setIsTruncated:(BOOL)arg1 ;
-(id)initWithChangeTransactions:(id)arg1 ;
-(BOOL)applyFilterByTransactionAuthors:(id)arg1 isExclusion:(BOOL)arg2 ;
-(BOOL)enumerateChanges:(long long)arg1 forModelsOfClass:(Class)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)lastChangeTokenForAccountID:(id)arg1 ;
-(void)setUpdates:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setDeletes:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)deletes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

