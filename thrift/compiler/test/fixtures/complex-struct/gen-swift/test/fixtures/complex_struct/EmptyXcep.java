/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_struct;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("emptyXcep")
public final class EmptyXcep extends org.apache.thrift.TBaseException implements com.facebook.thrift.payload.ThriftSerializable {
    private static final long serialVersionUID = 1L;


    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("emptyXcep");

    @ThriftConstructor
    public EmptyXcep(
    ) {
    }
    
    
    
    public static class Builder {
    
    
    public Builder() { }
        public Builder(EmptyXcep other) {
        }
    
        @ThriftConstructor
        public EmptyXcep build() {
            EmptyXcep result = new EmptyXcep (
            );
            return result;
        }
    }
    

    
    public static com.facebook.thrift.payload.Reader<EmptyXcep> asReader() {
      return EmptyXcep::read0;
    }
    
    public static EmptyXcep read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(EmptyXcep.NAMES_TO_IDS, EmptyXcep.FIELD_METADATA);
      EmptyXcep.Builder builder = new EmptyXcep.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
