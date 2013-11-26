/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription {

	Class _attributeValueClass;
	NSString* _valueTransformerName;
	unsigned _type;
	NSString* _attributeValueClassName;
	struct {
		unsigned _hasMaxValueInExtraIvars : 1;
		unsigned _hasMinValueInExtraIvars : 1;
		unsigned _storeBinaryDataExternally : 1;
		unsigned _reservedAttributeDescription : 29;
	}  _attributeDescriptionFlags;
	id _defaultValue;

}
+(id)_classNameForType:(unsigned)arg1 ;
+(void)initialize;
-(unsigned)_propertyType;
-(id)versionHash;
-(unsigned)attributeType;
-(BOOL)storesBinaryDataExternally;
-(id)valueTransformerName;
-(id)attributeValueClassName;
-(BOOL)isIndexed;
-(void)setAttributeValueClassName:(id)arg1 ;
-(id)validationPredicates;
-(id)validationWarnings;
-(void)setAttributeType:(unsigned)arg1 ;
-(void)setValueTransformerName:(id)arg1 ;
-(BOOL)allowsExternalBinaryDataStorage;
-(void)setAllowsExternalBinaryDataStorage:(BOOL)arg1 ;
-(Class)_attributeValueClass;
-(id)_initWithName:(id)arg1 type:(unsigned)arg2 withClassName:(id)arg3 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned)arg2 ;
-(id)_initWithName:(id)arg1 type:(unsigned)arg2 ;
-(void)setStoresBinaryDataExternally:(BOOL)arg1 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)_initWithType:(unsigned)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
@end
