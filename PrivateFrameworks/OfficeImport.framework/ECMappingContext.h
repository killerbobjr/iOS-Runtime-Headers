/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECMappingContext : NSObject {
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { 
        struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  mIndexToMappedIndex;
    NSMutableArray * mMappingInfos;
    struct __CFDictionary { } * mObjectToMappingInfo;
    NSMutableDictionary * mSheetNameToMappedIndex;
}

+ (id)mappingContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned int)arg3 andObject:(id)arg4;
- (void)dealloc;
- (id)init;
- (unsigned int)mappedSheetIndexForSheetIndex:(unsigned int)arg1;
- (unsigned int)mappedSheetIndexForSheetName:(id)arg1;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mappedSheetNames;
- (id)mappingInfoAtIndex:(unsigned int)arg1;
- (unsigned int)mappingInfoCount;
- (id)mappingInfoForObject:(id)arg1;

@end
