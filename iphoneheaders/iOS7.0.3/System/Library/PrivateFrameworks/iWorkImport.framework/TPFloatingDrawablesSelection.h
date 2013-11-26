/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSSet;

@interface TPFloatingDrawablesSelection : TSKSelection <NSFastEnumeration> {

	NSSet* _selectedInfos;

}

@property (nonatomic,readonly) NSSet * drawables;              //@synthesize selectedInfos=_selectedInfos - In the implementation block
+(id)selectionWithInfos:(id)arg1 ;
-(id)infos;
-(id)initWithInfos:(id)arg1 ;
-(id)selectionByAddingInfo:(id)arg1 ;
-(id)selectionByRemovingInfo:(id)arg1 ;
-(BOOL)containsInfo:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)drawables;
@end
