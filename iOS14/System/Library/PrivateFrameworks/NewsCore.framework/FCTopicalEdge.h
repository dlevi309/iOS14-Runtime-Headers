/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCTopicalNode;

@interface FCTopicalEdge : NSObject {

	BOOL _relatednessCalculated;
	FCTopicalNode* _a;
	FCTopicalNode* _b;
	unsigned long long _containsAButNotB;
	unsigned long long _containsAAndB;
	unsigned long long _containsBButNotA;

}

@property (a,nonatomic,retain) FCTopicalNode * a;                                 //@synthesize a=_a - In the implementation block
@property (b,nonatomic,retain) FCTopicalNode * b;                                 //@synthesize b=_b - In the implementation block
@property (assign,nonatomic) BOOL relatednessCalculated;                          //@synthesize relatednessCalculated=_relatednessCalculated - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) unsigned long long containsAButNotB;                 //@synthesize containsAButNotB=_containsAButNotB - In the implementation block
@property (assign,nonatomic) unsigned long long containsAAndB;                    //@synthesize containsAAndB=_containsAAndB - In the implementation block
@property (assign,nonatomic) unsigned long long containsBButNotA;                 //@synthesize containsBButNotA=_containsBButNotA - In the implementation block
@property (nonatomic,readonly) unsigned long long totalObservations; 
-(FCTopicalNode *)b;
-(unsigned long long)independentCountForNode:(id)arg1 ;
-(unsigned long long)containsAAndB;
-(void)setB:(FCTopicalNode *)arg1 ;
-(BOOL)relatednessCalculated;
-(void)setContainsAButNotB:(unsigned long long)arg1 ;
-(void)setContainsAAndB:(unsigned long long)arg1 ;
-(unsigned long long)containsAButNotB;
-(void)setContainsBButNotA:(unsigned long long)arg1 ;
-(void)setRelatednessCalculated:(BOOL)arg1 ;
-(void)calculateRelatedness;
-(unsigned long long)containsBButNotA;
-(id)initWithNode:(id)arg1 andNode:(id)arg2 ;
-(unsigned long long)totalObservations;
-(id)description;
-(void)setA:(FCTopicalNode *)arg1 ;
-(BOOL)isValid;
-(unsigned long long)hash;
-(FCTopicalNode *)a;
-(BOOL)isEqual:(id)arg1 ;
@end

